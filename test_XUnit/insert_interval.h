#pragma once

#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> insert(std::vector<std::vector<int>>& intervals, std::vector<int>& newInterval) {
        if (newInterval.empty()) return intervals;
        
        std::vector<std::vector<int>> newIntervals;
        bool intervalInserted = false;
            
        for (size_t i = 0; i < intervals.size(); i++) {
            if ( isOverlapping(newInterval, intervals[i])){
                newInterval[0] = min(newInterval[0], intervals[i][0]);
                newInterval[1] = max(newInterval[1], intervals[i][1]);
                
            }
            else if (newInterval[0] > intervals[i][0]) {
                newIntervals.push_back(intervals[i]);
            }
            else {
                newIntervals.push_back(newInterval);
                newIntervals.insert(newIntervals.end(), intervals.begin() + i, intervals.end());
                intervalInserted = true;
                break;
            }
        }      
        if (!intervalInserted) {
            newIntervals.push_back(newInterval);
        }
        return newIntervals;
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
