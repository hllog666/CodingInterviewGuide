/********************************************************************************
* @author: hllog
* @date: 2022/10/12 0:27
********************************************************************************/


#ifndef CODINGINTERVIEWGUIDE_MOUNTAIN_PAIR_NUMBER_H
#define CODINGINTERVIEWGUIDE_MOUNTAIN_PAIR_NUMBER_H

class Record {
public:
    explicit Record(int value);

    int value_;
    int times_;
};

class MountainPairNumber {
public:
    static int GetVisibleNum(int arr[], int len);

    static int GetInternalSum(int k);

    static int NextIndex(int i, int size);
};


#endif //CODINGINTERVIEWGUIDE_MOUNTAIN_PAIR_NUMBER_H
