// task_8.h
#ifndef TASK_8_H
#define TASK_8_H

#include <vector>

namespace task_8 {

    int findMissingNumber(int n, const std::vector<int>& nums) {
        // Calculate the expected sum of the range [0, n]
        int expectedSum = n * (n + 1) / 2;

        // Calculate the actual sum of the given array
        int actualSum = 0;
        for (int num : nums) {
            actualSum += num;
        }

        // The missing number is the difference between the expected and actual sum
        int missingNumber = expectedSum - actualSum;

        return missingNumber;
    }

} // namespace task_8

#endif // TASK_8_H
