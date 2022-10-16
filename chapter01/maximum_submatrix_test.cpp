/********************************************************************************
* @author: hllog
* @date: 2022/10/10 0:56
********************************************************************************/


#include <iostream>
#include "maximum_submatrix.h"

void MaxRecSizeTest() {
    std::cout << "MaxRecSizeTest start..." << std::endl;
    std::vector<int> v1{1, 0, 1, 1};
    std::vector<int> v2{1, 1, 1, 1};
    std::vector<int> v3{1, 1, 1, 0};
    std::vector<std::vector<int>> map{v1, v2, v3};
    int row = map.size();
    int col = map[0].size();
    int ans = MaximumSubMatrix::MaxRecSize(map, row, col);
    std::cout << ans << std::endl;
    std::cout << "MaxRecSizeTest end..." << std::endl;
}

int main() {
    MaxRecSizeTest();
    return 0;
}