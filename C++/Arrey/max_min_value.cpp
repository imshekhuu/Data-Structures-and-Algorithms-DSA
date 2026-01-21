#include <iostream>
using namespace std;
int maxValue(int arr[], int size);
int minValue(int arr[], int size);
int main()
{
   int arr[10] = {2, 4, 3, 5, 8, 9, 1, 0, 6, -6};
    maxValue(arr, 10);
    minValue(arr, 10);

    cout << "maximum value of arrey is: " <<maxValue(arr, 10) << endl;
    cout << "minimum value of arrey is: " <<minValue(arr, 10) << endl;
}


int maxValue(int arr[], int size){
    int max = INT32_MIN;
    for (int i = 0; i < size; i++)
    {
       if (max < arr[i])
       {
        max = arr[i];
       }
       
    }
    return max;
    

}
int minValue(int arr[], int size){
    int min = INT32_MAX;
    for (int i = 0; i < size; i++)
    {
       if (min > arr[i])
       {
        min = arr[i];
       }
       
    }
    return min;
}