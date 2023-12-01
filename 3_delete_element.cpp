#include <iostream>

using namespace std;

int del(int arr[], int x, int n) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            break; // Found the element to delete
        }
    }

    if (i == n) {
        // Element not found in the array
        return n;
    }

    for (int j = i; j < n - 1; j++) {
        arr[j] = arr[j + 1];
    }
     n = n-1;
    return n;
}

int main() {
    int arr[8] = {1, 2, 3, 4, 5, 7};
    int n = 6; // Current number of elements in the array
    int x; // Number to be deleted from the array

    cout << "Enter the number to delete: ";
    cin >> x;

    n = del(arr, x, n);

    cout << "Updated array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}