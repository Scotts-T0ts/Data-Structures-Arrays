#include<iostream>
using namespace std;

void left_rotate(int arr[], int n) {
    int temp = arr[0];
    for (int i = 1; i < n; i++) {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;

}

void left_rotate_by_d(int arr[],int n, int d){
    for (int i=0;i<d;i++){
        left_rotate(arr, n);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main() {
    int arr[] = {10, 20, 20, 30};
    int d=2;
    int n = sizeof(arr) / sizeof(arr[0]);
    left_rotate_by_d(arr,n,d);

    return 0;
}
