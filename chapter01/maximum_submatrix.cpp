/********************************************************************************
* @author: hllog
* @date: 2022/10/10 0:46
********************************************************************************/


#include "maximum_submatrix.h"
#include <iostream>

int MaximumSubMatrix::MaxRecSize(std::vector<std::vector<int>> &map, int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            std::cout << map[i][j] << " ";
        }
        std::cout << std::endl;
    }
    if (map.empty() || row == 0 || col == 0) {
        return 0;
    }
    int maxArea = 0;
    int *height = new int[col];
    // 注：C++的动态数组不会赋默认值
    for (int i = 0; i < col; i++) {
        height[i] = 0;
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            height[j] = map[i][j] == 0 ? 0 : height[j] + 1;
            std::cout << "MaxRecSize height[" << j << "] = " << height[j] << std::endl;
        }
        maxArea = std::max(MaxRecFromBottom(height, col), maxArea);
        std::cout << "MaxRecSize maxArea = " << maxArea << std::endl;
    }
    delete[] height;
    return maxArea;
}

int MaximumSubMatrix::MaxRecFromBottom(int height[], int len) {
    for (int i = 0; i < len; i++) {
        std::cout << "MaxRecFromBottom height[" << i << "] = " << height[i] << std::endl;
    }
    std::cout << "MaxRecFromBottom len = " << len << std::endl;
    if (height == nullptr || len == 0) {
        return 0;
    }
    int maxArea = 0;
    std::stack<int> st;
    for (int i = 0; i < len; i++) {
        while (!st.empty() && height[i] <= height[st.top()]) {
            int j = st.top();
            st.pop();
            int k = st.empty() ? -1 : st.top();
            int curArea = (i - k - 1) * height[j];
            std::cout << "MaxRecFromBottom i = " << i << std::endl;
            std::cout << "MaxRecFromBottom j = " << j << std::endl;
            std::cout << "MaxRecFromBottom height[j] = " << height[j] << std::endl;
            maxArea = std::max(maxArea, curArea);
            std::cout << "MaxRecFromBottom maxArea = " << maxArea << std::endl;
        }
        st.push(i);
    }
    while (!st.empty()) {
        int j = st.top();
        st.pop();
        int k = st.empty() ? -1 : st.top();
        int curArea = (len - k - 1) * height[j];
        maxArea = std::max(maxArea, curArea);
        std::cout << "MaxRecFromBottom maxArea 2 = " << maxArea << std::endl;
    }
    return maxArea;
}