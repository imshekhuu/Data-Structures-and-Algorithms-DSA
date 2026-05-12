// Print Wave

#include <iostream>
#include <vector>
using namespace std;

vector<int> printWave(vector<vector<int>> &arr, int nRow, int mCol);

int main() {

    vector<vector<int>> arr = {
        {1,2,3,4},
        {7,6,5,4},
        {24,6,4,76}
    };

    vector<int> ans = printWave(arr, 3, 4);

    for(int x : ans){
        cout << x << " ";
    }

    return 0;
}

vector<int> printWave(vector<vector<int>> &arr, int nRow, int mCol){

    vector<int> ans;

    for(int col = 0; col < mCol; col++){

        // Odd column -> Bottom to Top
        if(col & 1){

            for(int row = nRow - 1; row >= 0; row--){
                ans.push_back(arr[row][col]);
            }

        }
        else{

            // Even column -> Top to Bottom
            for(int row = 0; row < nRow; row++){
                ans.push_back(arr[row][col]);
            }

        }

    }

    return ans;
}