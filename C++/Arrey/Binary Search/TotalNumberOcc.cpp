#include <iostream>
using namespace std;
int TotalNumOcurrance(int last, int first);
int FirstOcurrance(int arr[], int size, int key);
int LastOcurrance(int arr[], int size, int key);
int main()
{
    int arr[8] = {1,2,3,4,5,5,5,6};
    int firstocc = FirstOcurrance(arr, 8, 5);
    int lastocc = LastOcurrance(arr, 8, 5);
    int totalocc = TotalNumOcurrance(lastocc, firstocc);
    cout << "total number of Ocurrance is: " << totalocc << endl;

    return 0;
}


int FirstOcurrance(int arr[], int size, int key){
    int s = 0;
    int e = size - 1;
    int ans = -1;
    int mid = s + (e-s)/2;
    while (s<= e)
    {
       if (key == arr[mid])
       {
        ans = mid;
        e = mid -1;
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
    while (s<= e)
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
int TotalNumOcurrance(int last, int first){
    return (last - first) + 1;
}
