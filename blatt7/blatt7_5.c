#include <stdio.h>

void swap(int arr1[], int arr2[], int len) {
    int temp[len];
    for (int i = 0; i < len; i++) {
        temp[i] = arr1[i];
    }
    for (int i = 0; i < len; i++) {
        arr1[i] = arr2[i];
    }
    for (int i = 0; i < len; i++) {
        arr2[i] = temp[i];
    }
    
}


void display(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr1[] = {1, 2, 3, 4, 5, 6, 1117, 8, 10, 10};
    display(arr, 10);
    display(arr1, 10);
    swap(arr, arr1, 10);
    display(arr, 10);
    display(arr1, 10);
    return 0;
}
