// task_9.h
#ifndef TASK_9_H
#define TASK_9_H

#include <vector>

namespace task_9 {

    int findKthPositive(int n, int k, const std::vector<int>& arr) {
        int missingCount = 0;
        int currentNumber = 1;
        int i = 0;

        while (missingCount < k) {
            if (i < arr.size() && arr[i] == currentNumber) {
                // If the current number is in the array, move to the next element
                i++;
            } else {
                // If the current number is missing, increment the missing count
                missingCount++;
            }

            // Move to the next number
            currentNumber++;
        }

        // The k-th missing positive integer is found
        return currentNumber - 1;
    }

} // namespace task_9

#endif // TASK_9_H
