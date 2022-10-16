/********************************************************************************
* @author: hllog
* @date: 2022/10/10 0:46
********************************************************************************/


#ifndef CODINGINTERVIEWGUIDE_MAXIMUM_SUBMATRIX_H
#define CODINGINTERVIEWGUIDE_MAXIMUM_SUBMATRIX_H


#include <stack>
#include <vector>

class MaximumSubMatrix {
public:
    static int MaxRecSize(std::vector<std::vector<int>> &map, int row, int col);

    static int MaxRecFromBottom(int height[], int len);
};


#endif //CODINGINTERVIEWGUIDE_MAXIMUM_SUBMATRIX_H
