#ifndef COMBINATION_SUM_3_H
#define COMBINATION_SUM_3_H

#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> combinationSum3(int k, int n) {
        return combinationSum3(k, n, 1);
    }

private:
    std::vector<std::vector<int>> combinationSum3(int k, int n, int min) {
        std::vector<std::vector<int>> results;
        if (k == 1) {
            if (n < 10 && n >= min) {
                std::vector<int > result({ n });
                results.push_back(result);
            }
            return results;
        }
        for (size_t i = min; i < 10; ++i) {
            auto sub_sums = combinationSum3(k - 1, n - i, i + 1);
            for (size_t j=0; j < sub_sums.size(); ++j) {
                auto sub_sum = sub_sums[j];
                std::vector<int>::iterator it = sub_sum.begin();
                sub_sum.insert(it,i);
                results.push_back(sub_sum);
            }
        }        
        return results;
    }
};


#endif /* COMBINATION_SUM_3_H */