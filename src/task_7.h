// task_7.h
#ifndef TASK_7_H
#define TASK_7_H

namespace task_7 {

    // Recursive function to calculate x^n
    int recursivePow(int x, int n) {
        if (n == 0) {
            return 1; // x^0 is 1
        } else {
            return x * recursivePow(x, n - 1); // x^n = x * x^(n-1)
        }
    }

} // namespace task_7

#endif // TASK_7_H
