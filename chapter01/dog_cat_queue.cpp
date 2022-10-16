/********************************************************************************
* @author: hllog
* @date: 2022/10/9 0:37
********************************************************************************/


#include <utility>
#include <stdexcept>
#include "dog_cat_queue.h"

Pet::Pet() = default;

Pet::Pet(std::string type) {
    this->type_ = std::move(type);
}

std::string Pet::GetType() const {
    return type_;
}

Dog::Dog() : Pet("dog") {

}

Cat::Cat() : Pet("cat") {

}

PetEnterQueue::PetEnterQueue(Pet pet, long count) {
    this->pet_ = std::move(pet);
    this->count_ = count;
}

Pet PetEnterQueue::GetPet() const {
    return this->pet_;
}

long PetEnterQueue::GetCount() const {
    return this->count_;
}

std::string PetEnterQueue::GetEnterPetType() {
    return this->pet_.GetType();
}

DogCatQueue::DogCatQueue() {
    count_ = 0;
}

void DogCatQueue::Add(const Pet &pet) {
    if (pet.GetType() == "dog") {
        PetEnterQueue *petEnterQueue = new PetEnterQueue(pet, this->count_++);
        this->dogQ_.push(*petEnterQueue);
        delete petEnterQueue;
    } else if (pet.GetType() == "cat") {
        PetEnterQueue *petEnterQueue = new PetEnterQueue(pet, this->count_++);
        this->catQ_.push(*petEnterQueue);
        delete petEnterQueue;
    } else {
        throw std::runtime_error("Err, not dog or cat");
    }
}

Pet DogCatQueue::PollAll() {
    if (!this->dogQ_.empty() && !this->catQ_.empty()) {
        if (this->dogQ_.front().GetCount() < this->catQ_.front().GetCount()) {
            Pet pet = this->dogQ_.front().GetPet();
            this->dogQ_.pop();
            return pet;
        } else {
            Pet pet = this->catQ_.front().GetPet();
            this->catQ_.pop();
            return pet;
        }
    } else if (!this->dogQ_.empty()) {
        Pet pet = this->dogQ_.front().GetPet();
        this->dogQ_.pop();
        return pet;
    } else if (!this->catQ_.empty()) {
        Pet pet = this->catQ_.front().GetPet();
        this->catQ_.pop();
        return pet;
    } else {
        throw std::runtime_error("Err, queue is empty!");
    }
}

Dog DogCatQueue::PollDog() {
    if (!this->IsDogQueueEmpty()) {
        Pet pet = this->dogQ_.front().GetPet();
        this->dogQ_.pop();
        Dog *dog = static_cast<Dog *>(&pet);
        Dog tmp = *dog;
        delete dog;
        return tmp;
    } else {
        throw std::runtime_error("Dog queue is empty!");
    }
}

Cat DogCatQueue::PollCat() {
    if (!this->IsCatQueueEmpty()) {
        Pet pet = this->catQ_.front().GetPet();
        this->catQ_.pop();
        Cat *cat = static_cast<Cat *>(&pet);
        Cat tmp = *cat;
        delete cat;
        return tmp;
    } else {
        throw std::runtime_error("Dog queue is empty!");
    }
}

bool DogCatQueue::IsEmpty() {
    return this->dogQ_.empty() && this->catQ_.empty();
}

bool DogCatQueue::IsDogQueueEmpty() {
    return this->dogQ_.empty();
}

bool DogCatQueue::IsCatQueueEmpty() {
    return this->catQ_.empty();
};