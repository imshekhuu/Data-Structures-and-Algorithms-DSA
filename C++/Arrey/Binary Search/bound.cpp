#include <iostream>
using namespace std;
int FirstOcurrance(int arr[], int size, int key);
int LastOcurrance(int arr[], int size, int key);
int main()
{
    int arr[5] = {1,2,3,3,5};
    int firstocc = FirstOcurrance(arr, 5, 3);
    int lastocc = LastOcurrance(arr, 5, 3);
    cout << "the index value of 3 in first occ: "<< firstocc << endl;
    cout << "the index value of 3 in last occ: "<< lastocc << endl;
    
    return 0;
}
int FirstOcurrance(int arr[], int size, int key){    
    int s = 0;
    int e = size - 1;
    int ans = -1;
    int mid = s + (e-s)/2;
    while (s <= e)
    {
        if (key == arr[mid])
        {
            ans = mid;
            e = mid - 1;
        }

        else if (key > arr[mid])
        {
           s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
        
        
    }

    return ans;
    
}
int LastOcurrance(int arr[], int size, int key){
    int s = 0;
    int e = size - 1;
    int ans = -1;
    int mid = s + (e-s)/2;
    while (s <= e)
    {
       if (key == arr[mid])
       {
         ans = mid;
         s = mid + 1;
       }
       else if (key > arr[mid])
       {
        s = mid + 1;
       }
       else{
        e = mid - 1;
       }
       mid = s + (e-s)/2;
       
       
    }
    return ans;
    

}
