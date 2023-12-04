#include <iostream>

using namespace std;
#include "task_1.h"
#include "task_2.h"
#include "task_3.h"
#include "task_4.h"
#include "task_5.h"
#include "task_6.h"
#include "task_7.h"
#include "task_8.h"
#include "task_9.h"
#include "task_10.h"

int main() {
    cout << "Task 1:" << endl;
    solveTestCases();

    cout << "Task 2:" << endl;
    solveProblem();

    cout << "Task 3:" << endl;
    mergeSortedArrays();

    cout << "Task 4:" << endl;

    int n, k;
    cin >> n >> k;

    vector<vector<int>> matrix(n, vector<int>(n));

    // Input matrix elements
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    // Call the function to find the kth smallest element
    int result = kthSmallestElement(matrix, k);

    // Output the result
    cout << result << endl;


    cout << "Task 5:" << endl;
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    int k = 2;

    vector<int> result = topKFrequent(nums, k);

    // Print the result
    cout << "Top " << k << " frequent elements: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Task 6:" << endl;

    vector<int> nums12 = {1, 3, 5, 6};
    int target12 = 5;

    pair<int, int> result1 = searchInsert(nums12, target12);

    cout << result1.first << " " << result1.second << endl;

    vector<int> nums22 = {1, 5, 7};
    int target2 = 9;

    pair<int, int> result2 = searchInsert(nums22, target2);

    cout << result2.first << " " << result2.second << endl;

    vector<int> nums33 = {1, 3};
    int target3 = 2;

    pair<int, int> result3 = searchInsert(nums33, target3);

    cout << result3.first << " " << result3.second << endl;

    cout << "Task 7:" << endl;

    int x11 = 2;
    int n11 = 6;

    int result = recursivePow(x11, n11);

    cout << "2^6: " << result << endl;


    cout << "Task 8:" << endl;

    int n1 = 4;
    vector<int> nums1 = {1, 3, 4};

    int result1 = findMissingNumber(n1, nums1);
    cout << "Missing number: " << result1 << endl;

    int n2 = 6;
    vector<int> nums2 = {6};

    int result2 = findMissingNumber(n2, nums2);
    cout << "Missing number: " << result2 << endl;

    cout << "Task 9:" << endl;

    int n12 = 5;
    int k12 = 5;
    vector<int> arr = {2, 3, 4, 7, 11};

    int result = findKthPositive(n12, k12, arr);
    cout << "The " << k12 << "-th missing positive integer is: " << result << endl;

    cout << "Task 10:" << endl;

    int number = 12;
    int k0 = 3;

    int result = kthFactor(number, k0);
    cout << "The " << k0 << "-th factor of " << number << " is: " << result << endl;

    return 0;
}
