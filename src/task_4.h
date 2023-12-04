// task_4.h

#ifndef TASK_4_H
#define TASK_4_H

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int kthSmallestElement(vector<vector<int>>& matrix, int k) {
    int n = matrix.size();

    // Use a min heap to keep track of the smallest elements
    priority_queue<int, vector<int>, greater<int>> minHeap;

    // Push the first element of each row into the min heap
    for (int i = 0; i < n; ++i) {
        minHeap.push(matrix[i][0]);
    }

    // Pop the smallest element k-1 times to find the kth smallest element
    for (int i = 0; i < k - 1; ++i) {
        int smallest = minHeap.top();
        minHeap.pop();

        // If there are more elements in the same row, push the next element from that row
        if (i % n != n - 1 && !minHeap.empty()) {
            minHeap.push(matrix[i % n][i / n + 1]);
        }
    }

    return minHeap.top();
}

#endif // TASK_4_H
