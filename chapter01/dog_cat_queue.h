/********************************************************************************
* @author: hllog
* @date: 2022/10/9 0:37
********************************************************************************/


#ifndef CODINGINTERVIEWGUIDE_DOG_CAT_QUEUE_H
#define CODINGINTERVIEWGUIDE_DOG_CAT_QUEUE_H

#include <string>
#include <queue>

class Pet {
public:
    Pet();

    explicit Pet(std::string type);

    std::string GetType() const;

private:
    std::string type_;
};

class Dog : public Pet {
public:
    Dog();
};

class Cat : public Pet {
public:
    Cat();
};

class PetEnterQueue {
public:
    PetEnterQueue(Pet pet, long count);

    Pet GetPet() const;

    long GetCount() const;

    std::string GetEnterPetType();

private:
    Pet pet_;
    long count_;
};

class DogCatQueue {
public:
    DogCatQueue();

    void Add(const Pet& pet);

    Pet PollAll();

    Dog PollDog();

    Cat PollCat();

    bool IsEmpty();

    bool IsDogQueueEmpty();

    bool IsCatQueueEmpty();

private:
    std::queue<PetEnterQueue> dogQ_;
    std::queue<PetEnterQueue> catQ_;
    long count_;
};


#endif //CODINGINTERVIEWGUIDE_DOG_CAT_QUEUE_H
