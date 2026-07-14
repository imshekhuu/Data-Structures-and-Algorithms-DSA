// 4 Sum - All Quadruples
// Difficulty: MediumAccuracy: 19.94%Submissions: 218K+Points: 4Average Time: 30m
// Given an array arr[] of integers and another integer target. You have to find all unique quadruples from the given array whose sum is equal to the given target.

// Note: All the quadruples should be internally sorted, i.e for any quadruple [q1, q2, q3, q4] it should be : q1 ≤ q2 ≤ q3 ≤ q4.


class Solution {
public:
    vector<vector<int>> fourSum(vector<int> &arr, int target) {

        vector<vector<int>> ans;
        int n = arr.size();

        sort(arr.begin(), arr.end());

        for(int i = 0; i < n - 3; i++) {

            if(i > 0 && arr[i] == arr[i - 1])
                continue;

            for(int j = i + 1; j < n - 2; j++) {

                if(j > i + 1 && arr[j] == arr[j - 1])
                    continue;

                int left = j + 1;
                int right = n - 1;

                while(left < right) {

                    long long total =
                        (long long)arr[i] +
                        arr[j] +
                        arr[left] +
                        arr[right];

                    if(total == target) {

                        ans.push_back({
                            arr[i],
                            arr[j],
                            arr[left],
                            arr[right]
                        });

                        left++;
                        right--;

                        while(left < right &&
                              arr[left] == arr[left - 1])
                            left++;

                        while(left < right &&
                              arr[right] == arr[right + 1])
                            right--;
                    }
                    else if(total < target) {
                        left++;
                    }
                    else {
                        right--;
                    }
                }
            }
        }

        return ans;
    }
};