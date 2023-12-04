// task_10.h
#ifndef TASK_10_H
#define TASK_10_H

namespace task_10 {

    int kthFactor(int n, int k) {
        // Check for invalid input
        if (k > n) {
            return -1;
        }

        int count = 0;
        for (int i = 1; i <= n; ++i) {
            // Check if i is a factor of n
            if (n % i == 0) {
                count++;

                // Check if this is the k-th factor
                if (count == k) {
                    return i;
                }
            }
        }

        // If we reach here, n has fewer than k factors
        return -1;
    }

} // namespace task_10

#endif // TASK_10_H
