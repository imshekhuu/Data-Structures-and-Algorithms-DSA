#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeArrey(vector<int> arr1, int m, vector<int> arr2, int n){
    vector<int> result;

    int i = 0, j = 0;


    while(i < arr1.size() && j < arr2.size()){
        if(arr1[i] < arr2[j]){
            result.push_back(arr1[i]);
            i++;
        } else {
            result.push_back(arr2[j]);
            j++;
        }
    }

    while(i < arr1.size()){
        result.push_back(arr1[i]);
        i++;
    }

    while(j < arr2.size()){
        result.push_back(arr2[j]);
        j++;
    }

    return result;
}

void print(vector<int> arr){
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i];
    }
    cout << " " << endl;
}

int main(){

    vector<int> arr1 = {2,3,5,6,7};
    vector<int> arr2 = {1,2,4,6,8};

    int m = arr1.size();
    int n = arr2.size();

    vector<int> ans = mergeArrey(arr1, m, arr2, n);
    print(ans);
}