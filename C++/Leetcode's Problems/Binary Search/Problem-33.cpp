// 33. Search in Rotated Sorted Array


// There is an integer array nums sorted in ascending order (with distinct values).

// Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

// Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

// You must write an algorithm with O(log n) runtime complexity.




#include <iostream>
#include <vector>
using namespace std;

int pivot(vector<int> &arr);
int binarySearch(vector<int> &arr, int target, int s, int e);

int main() {

    vector<int> arr;

    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(7);
    arr.push_back(0);
    arr.push_back(1);
    arr.push_back(2);

    int pivotElement = pivot(arr);

    int target = 6;

    // target in right half
    if(target >= arr[pivotElement] && target <= arr[arr.size()-1]) {

        cout << binarySearch(arr, target, pivotElement, arr.size()-1);
    }
    else {

        cout << binarySearch(arr, target, 0, pivotElement-1);
    }

    return 0;
}


// Find Pivot (minimum element index)

int pivot(vector<int> &arr){

    int s = 0;
    int e = arr.size() - 1;

    int mid = s + (e-s)/2;

    while(s < e){

        if(arr[mid] >= arr[0]) {
            s = mid + 1;
        }
        else {
            e = mid;
        }

        mid = s + (e-s)/2;
    }

    return s;
}


// Binary Search

int binarySearch(vector<int> &arr, int target, int s, int e){

    int mid = s + (e-s)/2;

    while(s <= e){

        if(arr[mid] == target){
            return mid;
        }

        else if(arr[mid] > target){
            e = mid - 1;
        }

        else{
            s = mid + 1;
        }

        mid = s + (e-s)/2;
    }

    return -1;
}