#include <iostream>

using namespace std;

int insert(int arr[], int x, int n, int pos) {
    if (n >= 8) {
        cout << "Array is full. Cannot insert more elements." << endl;
        return n;
    }

    int index = pos - 1;

    for (int i = n - 1; i >= index; i--) {
        arr[i + 1] = arr[i];
    }
    arr[index] = x;

    return (n + 1);
}

int main() {
    int arr[8] = {1, 2, 3, 4, 5, 7};
    int n = 6; // Current number of elements in the array
    int x; // Number to be entered in the array

    cout << "Enter the number: ";
    cin >> x;

    int pos; // Position at which the number is to be entered in the array
    cout << "Enter the position: ";
    cin >> pos;

    n = insert(arr, x, n, pos);

    cout << "Updated array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}