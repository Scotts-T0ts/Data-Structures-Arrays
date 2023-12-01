#include <iostream>
using namespace std;

int largest(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        bool flag = true;
        for (int j = 0; j < n; j++) {
            if (arr[j] > arr[i]) {
                flag = false;
                break;
            }
        }
        if (flag == true) {
            return arr[i];
        }
    }
    return -1; 
}

int large(int arr[],int n){
    int res = 0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[res])
         res = i;

    }
 return arr[res];
}
int main() {
    int arr[] = {10, 20, 30, 11};
    cout << largest(arr,4);
    cout<<large(arr,4);
    return 0;
}
