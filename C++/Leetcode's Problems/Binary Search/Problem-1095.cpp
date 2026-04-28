// 1095. Find in Mountain Array

// (This is an interactive problem.)

// You may recall that an array arr is a mountain array if and only if:

// arr.length >= 3
// There exists some i (0-indexed) with 0 < i < arr.length - 1 such that:
// arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
// arr[i] > arr[i + 1] > ... > arr[arr.length - 1]
// Given a mountain array mountainArr, return the minimum index such that mountainArr.get(index) == target. If such an index does not exist, return -1.

// You cannot access the mountain array directly. You may only access the array using a MountainArray interface:

// MountainArray.get(k) returns the element of the array at index k (0-indexed).
// MountainArray.length() returns the length of the array.
// Submissions making more than 100 calls to MountainArray.get will be judged Wrong Answer.


#include <iostream>
#include <vector>
using namespace std;

int peak(vector<int> &arr);
int leftasc(vector<int> &arr, int target, int s, int e);
int rightdec(vector<int> &arr, int target, int s, int e);

int main() {

    vector<int> arr;

    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(3);
    arr.push_back(3);


    int peakelement = peak(arr);
    int left = leftasc(arr, 3, 0, peakelement);
    int right = rightdec(arr, 3, peakelement, arr.size() - 1);

    if(left != -1){
        cout << "The index of min element in left side of peak: " << left << endl;
    }
    else{
        cout <<  "The index of min element in right side of peak: "<< right << endl;
    }

}

// peak of the arrey

int peak(vector<int> &arr){

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

// min index in left of the peak

int leftasc(vector<int> &arr, int target, int s, int e){

    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<e){
        if(arr[mid] == target){
            ans = mid;
            e = mid -1;
        }
        else if(arr[mid] > target){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;


}

// min index in right of the peak

int rightdec(vector<int> &arr, int target, int s, int e){

    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<e){
        if(arr[mid] == target){
            ans = mid;
            e = mid -1;
        }
        else if(arr[mid] > target){
            s = mid + 1;               // <<<-     bcz the arrey is sorted in right to left
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}