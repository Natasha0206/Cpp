#include <vector>

class Solution {
public:
    bool equalPartitionHelper(int arr[], int N, int index, int targetSum, int currentSum, std::vector<std::vector<int>>& memo) {
        if (currentSum == targetSum)
            return true;

        if (index == N || currentSum > targetSum)
            return false;

        // Check if the result for the current state is already memoized
        if (memo[index][currentSum] != -1)
            return memo[index][currentSum];

        // Recursive calls with memoization
        bool result = equalPartitionHelper(arr, N, index + 1, targetSum, currentSum, memo) ||
                      equalPartitionHelper(arr, N, index + 1, targetSum, currentSum + arr[index], memo);

        // Memoize the result for the current state
        memo[index][currentSum] = result;

        return result;
    }

    int equalPartition(int N, int arr[]) {
        int totalSum = 0;
        for (int i = 0; i < N; i++)
            totalSum += arr[i];

        if (totalSum % 2 != 0)
            return false;

        int targetSum = totalSum / 2;

        // Initialize the memoization table with -1
        std::vector<std::vector<int>> memo(N + 1, std::vector<int>(targetSum + 1, -1));

        return equalPartitionHelper(arr, N, 0, targetSum, 0, memo);
    }
};