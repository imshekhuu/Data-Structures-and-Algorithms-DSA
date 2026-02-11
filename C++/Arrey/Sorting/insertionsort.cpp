#include <iostream>
using namespace std;
void InsertionSort(int arr[], int size);
int main()
{
    int arr[] = {4,23,56,34};
    int size = 4;
    InsertionSort(arr, size);
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
void InsertionSort(int arr[], int size){
    
}
