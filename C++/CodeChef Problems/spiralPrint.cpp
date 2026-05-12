// Print spiral

#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralWave(vector<vector<int>> &arr, int nRow, int mCol);

int main() {

    vector<vector<int>> arr = {
        {1,2,3,4},
        {7,6,5,4},
        {24,6,4,76}
    };

    vector<int> ans = spiralWave(arr, 3, 4);

    for(int x : ans){
        cout << x << " ";
    }

    return 0;
}