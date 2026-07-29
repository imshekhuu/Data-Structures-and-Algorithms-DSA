// 77. Combinations

// Given two integers n and k, return all possible combinations of k numbers chosen from the range [1, n].

// You may return the answer in any order.

 

// Example 1:

// Input: n = 4, k = 2
// Output: [[1,2],[1,3],[1,4],[2,3],[2,4],[3,4]]
// Explanation: There are 4 choose 2 = 6 total combinations.
// Note that combinations are unordered, i.e., [1,2] and [2,1] are considered to be the same combination.
// Example 2:

// Input: n = 1, k = 1
// Output: [[1]]
// Explanation: There is 1 choose 1 = 1 total combination.


#include <iostream>
#include <vector>
using namespace std;

void solver(vector<int>& nums, int idx, int k,
            vector<vector<int>>& ans, vector<int>& subset) {

    if (subset.size() == k) {
        ans.push_back(subset);
        return;
    }

    for (int i = idx; i < nums.size(); i++) {
        subset.push_back(nums[i]);
        solver(nums, i + 1, k, ans, subset);
        subset.pop_back();
    }
}

int main() {

    int n = 4;
    int k = 2;

    vector<int> nums;

    for (int i = 1; i <= n; i++) {
        nums.push_back(i);
    }

    vector<vector<int>> ans;
    vector<int> subset;

    solver(nums, 0, k, ans, subset);

    for (auto &vec : ans) {
        cout << "[ ";
        for (int val : vec) {
            cout << val << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}