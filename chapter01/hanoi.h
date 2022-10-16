/********************************************************************************
* @author: hllog
* @date: 2022/10/9 2:08
********************************************************************************/


#ifndef CODINGINTERVIEWGUIDE_HANOI_H
#define CODINGINTERVIEWGUIDE_HANOI_H


#include <string>

class Hanoi {
public:
    static int HanoiProblem(int num, const std::string &left, const std::string &mid, const std::string &right);

    static int
    Process(int num,
            const std::string &left,
            const std::string &mid,
            const std::string &right,
            const std::string &from,
            const std::string &to);
};

#endif //CODINGINTERVIEWGUIDE_HANOI_H
