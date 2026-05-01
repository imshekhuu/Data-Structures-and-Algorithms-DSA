// Given an unsorted array arr[] of size n, containing elements from the range 1 to n, it is known that one number in this range is missing, and another number occurs twice in the array, find both the duplicate number and the missing number.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Duplicate(vector<int> &arr);
void Missing(vector<int> &arr);

int main(){
    vector<int> v = {2, 5, 3, 6, 3};

    sort(v.begin(), v.end());

    Duplicate(v);
    Missing(v);

    return 0;
}

void Duplicate(vector<int> &arr){
    for(int i = 0; i < arr.size() - 1; i++){
        if(arr[i] == arr[i+1]){
            cout << "Duplicate value is: " << arr[i] << endl;
        }
    }
}

void Missing(vector<int> &arr){
    for(int i = 0; i < arr.size() - 1; i++){
        if(arr[i+1] != arr[i] + 1){
            cout << "Missing value is: " << arr[i] + 1 << endl;
        }
    }
}