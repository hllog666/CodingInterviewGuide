/********************************************************************************
* @author: hllog
* @date: 2022/10/9 2:28
********************************************************************************/


#ifndef CODINGINTERVIEWGUIDE_HANOI2_H
#define CODINGINTERVIEWGUIDE_HANOI2_H


#include <stack>
#include <string>

enum Action {
    No, LToM, MToL, MToR, RToM
};

class Hanoi2 {
public:
    static int HanoiProblem(int num, const std::string &left, const std::string &mid, const std::string &right);

    static int FromStackToToStack(Action record[],
                                  Action preNoAct,
                                  Action nowAct,
                                  std::stack<int> &fStack,
                                  std::stack<int> &tStack,
                                  const std::string &from,
                                  const std::string &to);
};


#endif //CODINGINTERVIEWGUIDE_HANOI2_H
