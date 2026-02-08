#include <iostream>
using namespace std;

void BubbleSort(int arr[], int size);

int main(int argc, char const *argv[])
{
    int arr[] = {64, 25, 12, 22, 11};
    int size = 5;

    BubbleSort(arr, size);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}


void BubbleSort(int arr[], int size) {
    bool swapped;

    for (int i = 0; i < size - 1; i++) {
        swapped = false;

        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}
