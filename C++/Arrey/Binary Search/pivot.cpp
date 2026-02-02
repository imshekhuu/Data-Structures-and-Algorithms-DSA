#include <iostream>
using namespace std;
int getPivot(int arr[], int size);
int main(int argc, char const *argv[])
{
    int arr[5] = {8,10,17,1,3};
    int ans = getPivot(arr, 5);
    cout << "Pivot element of this arrey is: " << ans << endl;
    
    return 0;
}
int getPivot(int arr[], int size){
    int s = 0;
    int e = size - 1;
    int mid = s + (e-s)/2;
    while (s<e)
    {
        if (arr[mid]>=arr[0])
        {
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
        
    }
    return s;
    
}
