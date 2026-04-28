#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {

    int T;
    cin >> T;

    while(T--){
        int n;
        cin >> n;


        vector<int> arr(n);
        for(int i = 0; i<n; i++){
            cin >> arr[i];
        }
    }


    int first = INT_MIN;
    int second = INT_MIN;

    for(int i = 0; i<n; i++){

        if(arr[i] > first){

            second = first;
            first = arr[i];

        }
        else if(arr[i] > second && arr[i] != first){

            second = arr[i];

        }

    }

    int sum = first + second;
    cout << "maximum of the arrey: " << sum << endl;

}