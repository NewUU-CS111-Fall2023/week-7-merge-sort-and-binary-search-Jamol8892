// Task_2.h

#ifndef TASK_2_H
#define TASK_2_H

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int calculateBeautifulness(vector<int>& Y) {
    int n = Y.size();
    int beautifulness = 0;

    for (int i = 0; i < n; ++i) {
        beautifulness += abs(Y[i] - (i + 1));
    }

    for (int i = 0; i < n; ++i) {
        for (int j = i + 2; j < n; ++j) {
            int newBeautifulness = beautifulness - abs(Y[i] - (i + 1)) - abs(Y[j] - (j + 1));
            newBeautifulness += abs(Y[i] - (j + 1)) + abs(Y[j] - (i + 1));

            beautifulness = max(beautifulness, newBeautifulness);
        }
    }

    return beautifulness;
}

void solveProblem() {
    int n;
    cin >> n;

    vector<int> Y(n);
    for (int i = 0; i < n; ++i) {
        cin >> Y[i];
    }

    int result = calculateBeautifulness(Y);
    cout << result << endl;
}

#endif // TASK_2_H
