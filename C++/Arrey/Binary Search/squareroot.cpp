#include <iostream>
using namespace std;

long long int BinarySearch(int key);

int main() {
    int ans = BinarySearch(36);
    cout << "Integer square root is: " << ans << endl;
    return 0;
}
long long int BinarySearch(int key) {
    int s = 0;
    int e = key;
    long long int mid = s + (e - s) / 2;
    long long int ans = -1;

    while (s <= e) {

        long long int square = mid * mid;

        if (square == key) {
            return mid;  
        }
        if (square < key) {
            ans = mid;    
            s = mid + 1;
        } else {
            e = mid - 1;
        }
        long long int mid = s + (e - s) / 2;
    }
    return ans; 
}



//Squre root of an float number 


