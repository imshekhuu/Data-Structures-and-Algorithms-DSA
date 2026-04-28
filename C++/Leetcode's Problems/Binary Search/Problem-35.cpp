// 35. Search Insert Position

// Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

// You must write an algorithm with O(log n) runtime complexity.

#include <iostream>
#include <vector>
using namespace std;

int binerySearch(vector<int> &arr, int target);
int linearSearch(vector<int> &arr, int target);

int main() {

    vector<int> arr = {1,2,3,5,7,8,9,12};

   int search =  binerySearch(arr, 7);
    // linearSearch(arr, 7);

    cout << "index of the target value: " << search << endl;

}

// binery search -> o(log n)

int binerySearch(vector<int> &arr, int target){

    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e-s)/2;

    while(s<=e){
        if(arr[mid] == target){
            return mid;
        }

        else if(arr[mid] > target){

            e = mid - 1;

        }
        else {

            s = mid + 1;

        }
        mid = s + (e-s)/2;
    }
    return -1;

}

// Linear Search -> o(n)

// int linearSearch(vector<int> &arr, int target){

//     for(int i = 0; i<arr.size() - 1; i++){

//         if(arr[i] == target){
//             return i;
//         }

//     }
//     return -1;
// }

