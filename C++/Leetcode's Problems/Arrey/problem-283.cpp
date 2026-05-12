// 283. Move Zeroes

// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

// Note that you must do this in-place without making a copy of the array.


// Example 1:

// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]
// Example 2:

// Input: nums = [0]
// Output: [0]



#include <iostream>
#include <vector>
using namespace std;

void moveZeros(vector<int> &arr);

int main() {

    vector<int> arr;

    arr.push_back(1);
    arr.push_back(0);
    arr.push_back(0);
    arr.push_back(4);
    arr.push_back(0);
    arr.push_back(12);

    cout << "Arrey before move zero" << endl;
    for(int i = 0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    
    moveZeros(arr);
    
    cout << "Arrey after move zero" << endl;

    for(int i = 0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }

}

void moveZeros(vector<int> &arr){

    int j = 0;

    for(int i = 0; i<arr.size(); i++){
        if(arr[i] != 0){
            arr[j] = arr[i];
            j++;
        }
    }

    while(j < arr.size()){
        arr[j] = 0;
        j++;
    }
}