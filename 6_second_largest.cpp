#include<iostream>
using namespace std;

int largest(int arr[], int n) {
    int res = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[res])
            res = i;
    }
    return res;
}

int secondLargest(int arr[], int n) {
    int largestIndex = largest(arr, n);
    int secondLargestIndex = -1;

    for (int i = 0; i < n; i++) {
        if (i != largestIndex) {
            if (secondLargestIndex == -1 || arr[i] > arr[secondLargestIndex]) {
                secondLargestIndex = i;
            }
        }
    }

   if (secondLargestIndex != -1) {
        return arr[secondLargestIndex];
    } else {    
        // No second largest element found
        return -1;
    }
}

int main() {
    int arr[] = {1, 1, 1, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << secondLargest(arr, size);

    return 0;
}
