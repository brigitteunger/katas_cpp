#pragma once

#include <vector>

class Solution {
public:
    int rob(std::vector<int>& nums) {
        int rob_0 = 0;
        int rob_1 = 0;
        int rob_2 = 0;
        int rob_3 = 0;

        for (auto num : nums) {
            rob_0 = max(rob_2 + num, rob_3 + num);
            rob_3 = rob_2;
            rob_2 = rob_1;
            rob_1 = rob_0;
        }
        return max(rob_0, rob_2);
    }
};