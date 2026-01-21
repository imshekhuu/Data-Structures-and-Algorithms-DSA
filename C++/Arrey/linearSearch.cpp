#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int n);

int main()
{
    int arr[10];
    int n;

    cout << "Enter your search value: ";
    cin >> n;

    cout << "Enter your array values:\n";
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    if (linearSearch(arr, 10, n))
        cout << "Value exists"<< n ;
    else
        cout << "Value does not exist";

    return 0;
}

bool linearSearch(int arr[], int size, int n)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == n)
        {
            return true;   
        }
    }
    return false;          
}
