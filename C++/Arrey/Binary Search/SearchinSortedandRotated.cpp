#include <iostream>
using namespace std;

int getPivot(int arr[], int size);
int binarySearch(int arr[], int start, int end, int key);
int findPosition(int arr[], int n, int key);

int main() {
    int arr[5] = {8, 10, 17, 1, 3};

    int pivot = getPivot(arr, 5);
    int index = findPosition(arr, 5, 3);

    cout << "Pivot index: " << pivot << endl;
    cout << "Element found at index: " << index << endl;

    return 0;
}

int getPivot(int arr[], int size) {
    int s = 0, e = size - 1;

    while (s < e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] >= arr[0])
            s = mid + 1;
        else
            e = mid;
    }
    return s;
}

int findPosition(int arr[], int n, int key) {
    int pivot = getPivot(arr, n);

    if (key >= arr[pivot] && key <= arr[n - 1]) {
        return binarySearch(arr, pivot, n - 1, key);
    } else {
        return binarySearch(arr, 0, pivot - 1, key);
    }
}

int binarySearch(int arr[], int start, int end, int key) {
    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key) return mid;
        else if (key > arr[mid]) start = mid + 1;
        else end = mid - 1;
    }
    return -1;
}
