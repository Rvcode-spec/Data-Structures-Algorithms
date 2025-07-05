#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            return mid;
        }

        // Search in the right half
        if (key > arr[mid]) {
            start = mid + 1;
        }
        // Search in the left half
        else {
            end = mid - 1;
        }
    }

    // Key not found
    return -1;
}

int main() {
    int even[6] = {2, 4, 6, 8, 10, 12};
    int odd[5] = {3, 5, 7, 9, 11};

    int indexEven = binarySearch(even, 6, 12);
    cout << "Index of 12 in even[]: " << indexEven << endl;

    int indexOdd = binarySearch(odd, 5, 7);
    cout << "Index of 7 in odd[]: " << indexOdd << endl;

    return 0;
}
