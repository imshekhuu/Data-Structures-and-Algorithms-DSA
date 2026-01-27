#include <iostream>
using namespace std;
int PeakMountain(int arr[], int size);
int main()
{
    int arr[8] = {1,2,3,4,5,3,2,0};
    int peak = PeakMountain(arr, 8);
    cout << "peak is: " << peak << endl;
    
    return 0;
}
int PeakMountain(int arr[], int size){
    int s = 0;
    int e = size - 1;
    int mid = s + (e-s)/2;
    while (s<e)
    {
        if (arr[mid] < arr[mid+1])
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

