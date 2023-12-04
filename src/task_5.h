// task_5.h
#ifndef TASK_5_H
#define TASK_5_H

#include <vector>
#include <unordered_map>
#include <queue>

std::vector<int> topKFrequent(const std::vector<int>& nums, int k) {
    std::unordered_map<int, int> frequencyMap;

    // Count the frequency of each element in the array
    for (int num : nums) {
        frequencyMap[num]++;
    }

    // Use a priority queue to keep track of the top k frequent elements
    std::priority_queue<std::pair<int, int>> pq; // max-heap based on frequency

    // Iterate through the frequency map
    for (const auto& entry : frequencyMap) {
        pq.push({entry.second, entry.first});
    }

    // Extract the top k frequent elements
    std::vector<int> result;
    for (int i = 0; i < k; ++i) {
        result.push_back(pq.top().second);
        pq.pop();
    }

    return result;
}

#endif // TASK_5_H
