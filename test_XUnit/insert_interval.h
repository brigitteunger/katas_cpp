#pragma once

#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> insert(std::vector<std::vector<int>>& intervals, std::vector<int>& newInterval) {
        if (newInterval.empty()) return intervals;
        
        intervals.insert(intervals.begin(), newInterval);
    
        for (size_t i = 1; i < intervals.size(); i++) {
            if ( isOverlapping(intervals[i-1], intervals[i])){
                intervals[i-1][0] = min(intervals[i-1][0], intervals[i][0]);
                intervals[i-1][1] = max(intervals[i-1][1], intervals[i][1]);
                intervals.erase(intervals.begin() + i);
                i--;
            }
            else if (intervals[i-1][0] > intervals[i][0]) {
                int temp_0 = intervals[i - 1][0];
                int temp_1 = intervals[i - 1][1];
                intervals[i - 1][0] = intervals[i][0];
                intervals[i - 1][1] = intervals[i][1];
                intervals[i][0] = temp_0;
                intervals[i][1] = temp_1;
            }
            else {
                break;
            }
        }        
        return intervals;
    }
private:
    bool isOverlapping(std::vector<int>& interval_1, std::vector<int>& interval_2) {
        return isInInterval(interval_1, interval_2[0]) || 
            isInInterval(interval_1, interval_2[1]) ||
            isInInterval(interval_2, interval_1[0]) || 
            isInInterval(interval_2, interval_1[1]);
    }

    bool isInInterval(std::vector<int>& interval, int value) {
        return value >= interval[0] && value <= interval[1];
    }
};
