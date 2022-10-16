/********************************************************************************
* @author: hllog
* @date: 2022/10/9 0:49
********************************************************************************/


#include <iostream>
#include "dog_cat_queue.h"

void DogCatQueueTest() {
    std::cout << "DogCatQueueTest start..." << std::endl;
    Pet *pet1 = new Dog();
    Pet *pet2 = new Dog();
    Pet *pet3 = new Dog();
    Pet *pet4 = new Cat();
    Pet *pet5 = new Cat();
    Pet *pet6 = new Cat();

    DogCatQueue dogCatQueue;
    dogCatQueue.Add(*pet1);
    dogCatQueue.Add(*pet2);
    dogCatQueue.Add(*pet3);
    dogCatQueue.Add(*pet4);
    dogCatQueue.Add(*pet5);
    dogCatQueue.Add(*pet6);

    std::cout << dogCatQueue.IsEmpty() << std::endl;
    std::cout << dogCatQueue.IsDogQueueEmpty() << std::endl;
    std::cout << dogCatQueue.IsCatQueueEmpty() << std::endl;

    dogCatQueue.PollCat();
    dogCatQueue.PollCat();
    dogCatQueue.PollCat();
    std::cout << dogCatQueue.IsEmpty() << std::endl;
    std::cout << dogCatQueue.IsDogQueueEmpty() << std::endl;
    std::cout << dogCatQueue.IsCatQueueEmpty() << std::endl;

    dogCatQueue.PollDog();
    std::cout << dogCatQueue.IsEmpty() << std::endl;
    std::cout << dogCatQueue.IsDogQueueEmpty() << std::endl;
    std::cout << dogCatQueue.IsCatQueueEmpty() << std::endl;

    delete pet1;
    delete pet2;
    delete pet3;
    delete pet4;
    delete pet5;
    delete pet6;
    std::cout << "DogCatQueueTest end..." << std::endl;
};

int main() {
    DogCatQueueTest();
    return 0;
}