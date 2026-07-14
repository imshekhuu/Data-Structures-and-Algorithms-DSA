// 15. 3Sum
// Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

// Notice that the solution set must not contain duplicate triplets.

 

// Example 1:

// Input: nums = [-1,0,1,2,-1,-4]
// Output: [[-1,-1,2],[-1,0,1]]
// Explanation: 
// nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
// nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
// nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
// The distinct triplets are [-1,0,1] and [-1,-1,2].
// Notice that the order of the output and the order of the triplets does not matter.
// Example 2:

// Input: nums = [0,1,1]
// Output: []
// Explanation: The only possible triplet does not sum up to 0.
// Example 3:

// Input: nums = [0,0,0]
// Output: [[0,0,0]]
// Explanation: The only possible triplet sums up to 0.



class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        sort(nums.begin(), nums.end()); // sort the before apply two pointer
        int n = nums.size(); // size of the arrey
        vector<vector<int>> ans;  // ans vector arrey to store 


        for(int i = 0; i<n-2; i++){

            // if the duplicated number 
            if(i > 0 && nums[i] == nums[i-1]) continue;

            // left start from the next of the i and right from the end of the arrey
            int left = i + 1;
            int right = n - 1;

            // logic -> nums[left + nums[right]] == -1 * nums[i]
            int target = -1 * nums[i];

            // two pointer logic
            while(left < right){

                int total = nums[left] + nums[right];

                if(total == target){

                    ans.push_back({nums[i], nums[left], nums[right]});
                    left++;
                    right--;

                    // if the duplicated number 
                    while(left < right && nums[left] == nums[left - 1]) left++;
                    while(left < right && nums[right] == nums[right + 1]) right--;
                }

                else if(total > target){
                    right--;
                }
                else{
                    left++;
                }
            }
        }
        return ans;
    }
};