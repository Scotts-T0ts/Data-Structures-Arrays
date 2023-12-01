#include<iostream>
using namespace std;

int search(int arr[], int x, int n){
    for(int i = 0; i < n; i++){
        if(arr[i] == x){
            return i; // Return the index if the element is found
        }
    }
    return -1; // Return -1 if the element is not found
}

int main() {
    int arr[] = {3, 4, 5, 6, 7};
    int x;
    cout << "Enter the number you want to find: ";
    cin >> x;

    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    int result = search(arr, x, n); // Call the search function

    if(result == -1){
        cout << "Element not found";
    } else {
        cout << "Element found at index: " << result;
    }

    return 0;
}
