#include <stdio.h>
int linearSearch(int arr[], int size, int key);
int main(int argc, char const *argv[])
{
    int arr[10];
    printf("enter the values of this arrey indxes: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int func = linearSearch(arr, 10, 5);
    printf("the index of key value is: %d", func);
    
    return 0;
}

int linearSearch(int arr[], int size, int key){
    for (int i = 0; i < size; i++)
    {
        if (key == arr[i])
        {
            return i;
        }
        
    }
    
}
