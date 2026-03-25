#include <iostream>
#include <vector>
using namespace std;

vector<int> Product(vector<int> arr){
    vector<int> ans;

    for(int i = 0; i < arr.size(); i++){
        int value = 1;

        for(int j = 0; j < arr.size(); j++){
            if(i != j){
                value *= arr[j];
            }
        }

        ans.push_back(value);
    }

    return ans;
}

void print(vector<int> arr){
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<int> arr = {1, 12, 3, 4};

    vector<int> ans = Product(arr);
    print(ans);
}