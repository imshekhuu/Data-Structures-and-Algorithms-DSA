// 189. Rotate Array


// Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

#include <iostream>
#include <vector>
using namespace std;

void rotatefunc(vector<int> &nums, int k);

int main() {

    vector<int> nums;

    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(2);
    nums.push_back(7);
    nums.push_back(9);
    nums.push_back(5);

    rotatefunc(nums, 3);

    for(int i = 0; i<nums.size() - 1; i++){
        cout << nums[i] << endl;
    }
}

void rotatefunc(vector<int> &nums, int k){

    int n = nums.size() - 1;
    k = k % n;

    for(int i = 0; i< k; i++){
        int lastelement = nums[n];
        for(int j = n-1; j > 0; j--){
            nums[j] = nums[j-1];
        }
        nums[0] = lastelement;
    }

    

}