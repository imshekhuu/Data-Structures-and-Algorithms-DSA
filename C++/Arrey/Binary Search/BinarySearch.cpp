#include <iostream>
using namespace std;
int BinarySearch(int arr[], int size, int key);

int main()
{
    int even[6] = {2,4,5,8,45,76};
    int odd[5] = {2,4,5,8,45};
    cout << "biunary search index of an odd size: "<< BinarySearch(odd, 5, 4) << endl;
    cout << "biunary search index of an even size: "<< BinarySearch(even, 6, 76) << endl;
    return 0;
}

int BinarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        mid = start + (end - start)/2;  
    }
    return -1;
    
}
