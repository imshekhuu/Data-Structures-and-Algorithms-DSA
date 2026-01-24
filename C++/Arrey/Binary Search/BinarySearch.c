#include <stdio.h>
int BinarySearch(int arr[], int size, int key);
int main(int argc, char const *argv[])
{
    int even[6] = {2,4,7,12,34,56};
    int odd[5] = {5,6,8,9,12};
    printf("binary index value of odd:%d \n", BinarySearch(odd, 5, 9));
    printf("binary index value of even:%d ", BinarySearch(even, 6, 34));
    return 0;
}

int BinarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    while (start <= end)
    {
       if (key == arr[mid])
       {
        return mid;
       }
       if (key > arr[mid])
       {
        start = mid + 1;
       }
       else{
        end = mid - 1;
       }
       mid = start + (end - start) / 2;
    }
    return -1;
    
}
