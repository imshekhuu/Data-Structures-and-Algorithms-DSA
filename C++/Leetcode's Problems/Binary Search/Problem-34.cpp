// 34. Find First and Last Position of Element in Sorted Array

// Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

// If target is not found in the array, return [-1, -1].

// You must write an algorithm with O(log n) runtime complexity.

#include <iostream>
#include <vector>
using namespace std;

int firstposition(vector<int> &arr, int target);
int lastposition(vector<int> &arr, int target);

int main() {

    vector<int> &arr = {1,2,3,4,4,4,5,6,7,8};

    int first = firstposition(arr, 4);
    int last = firstposition(arr, 4);

    cout << "first and last position of the element: " << {first, last} << endl;

}

// first position of the element 

int firstposition(vector<int> &arr, int target){

    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e-s)/2;

    int ans = -1;

    while(s<=e){

        if(arr[mid] == target){
            e = mid - 1;
            ans = mid;
        }
        else if(arr[mid] > target){
            e = mid -1;
        }
        else{
            s =  mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;


}

// last position of the element 

int lastposition(vector<int> &arr, int target){
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e-s)/2;

    int ans = -1;

    while(s<=e){

        if(arr[mid] == target){
            s = mid + 1;
            ans = mid;
        }
        else if(arr[mid] > target){
            e = mid -1;
        }
        else{
            s =  mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;

}
