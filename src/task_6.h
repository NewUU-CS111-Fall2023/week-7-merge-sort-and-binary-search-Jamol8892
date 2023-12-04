// task_6.h
#ifndef TASK_6_H
#define TASK_6_H

#include <vector>

namespace task_6 {

    std::pair<int, int> searchInsert(const std::vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                return {1, mid}; // Target found
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        // Target not found, return -1 and the index where it should be inserted
        return {-1, low};
    }

} // namespace task_6

#endif // TASK_6_H
