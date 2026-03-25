#include <iostream>
#include <vector>
using namespace std;

vector<int> MoveZero(vector<int> arr){
    vector<int> arr2;
    int k = 0;
    for(int i =0; i<arr.size(); i++){
        if(arr[i] != 0){
            arr2.push_back(arr[i]);
        }
    }

    int zeros = arr.size() - arr2.size();
    for(int i = 0; i< zeros; i++){
        arr2.push_back(0);
    }    

    return arr2;
}


void print(vector<int> arr){
    for(int i = 0; i<arr.size(); i++){
        cout << arr[i];
    }
    cout << " " << endl;
}
int main(){
    vector<int> arr;

    arr.push_back(0);
    arr.push_back(0);
    arr.push_back(4);
    arr.push_back(4);
    arr.push_back(0);


    vector<int> ans = MoveZero(arr);
    print(ans);
}