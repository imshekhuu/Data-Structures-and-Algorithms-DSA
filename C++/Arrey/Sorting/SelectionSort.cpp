#include <iostream>
using namespace std;

void SelectionSort(int arr[], int size);

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int size = 5;

    SelectionSort(arr, size);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

void SelectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        int temp;

        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        swap(arr[minIndex], arr[i]);
        // arr[minIndex] = temp;
        // arr[i] = arr[minIndex];
        // temp = arr[i];
    }
}
