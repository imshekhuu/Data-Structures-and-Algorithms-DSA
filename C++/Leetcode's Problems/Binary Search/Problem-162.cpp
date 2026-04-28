// 162. Find Peak Element

// A peak element is an element that is strictly greater than its neighbors.

// Given a 0-indexed integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks.

// You may imagine that nums[-1] = nums[n] = -infinity. In other words, an element is always considered to be strictly greater than a neighbor that is outside the array.

// You must write an algorithm that runs in O(log n) time.


#include <iostream>
#include <vector>
using namespace std;

int peakmount(vector<int> &arr);

int main() {

    vector<int> arr;

    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(3);
    arr.push_back(0);

    int peaknum = peakmount(arr);

    cout << "peak element of this arrey is: " << peaknum << endl;

}

int peakmount(vector<int> &arr){

    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e-s)/2;

    while(s<e){
        if(arr[mid] < arr[mid+1]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return e;

}