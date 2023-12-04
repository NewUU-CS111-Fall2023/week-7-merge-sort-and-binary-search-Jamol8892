// task_3.h

#ifndef TASK_3_H
#define TASK_3_H

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void mergeSortedArrays() {
    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;

        vector<int> A(N);
        vector<int> B(M);

        // Input for the first sorted array A
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        // Input for the second sorted array B
        for (int i = 0; i < M; ++i) {
            cin >> B[i];
        }

        // Merge the two sorted arrays into one sorted array
        vector<int> result(N + M);
        merge(A.begin(), A.end(), B.begin(), B.end(), result.begin(), greater<int>());

        // Print the merged sorted array
        for (int i = 0; i < N + M; ++i) {
            cout << result[i] << " ";
        }

        cout << endl;
    }
}

#endif // TASK_3_H
