#ifndef TASK_1_H
#define TASK_1_H

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int performOperationsAndSum(vector<int>& A) {
    int N = A.size();
    vector<int> medians;

    // Perform N-2 moves
    for (int i = 1; i < N - 1; i += 2) {
        // Find median of subarray [i-1, i, i+1]
        vector<int> subarray = {A[i - 1], A[i], A[i + 1]};
        sort(subarray.begin(), subarray.end());
        medians.push_back(subarray[1]);

        // Remove the minimum of medians from the original array
        int minMedian = *min_element(medians.begin(), medians.end());
        auto it = find(A.begin(), A.end(), minMedian);
        A.erase(it);
    }

    // Sum of remaining numbers in the array
    int sum = 0;
    for (int num : A) {
        sum += num;
    }

    return sum;
}

void solveTestCases() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        int result = performOperationsAndSum(A);
        cout << result << endl;
    }
}

#endif // TASK_1_H
