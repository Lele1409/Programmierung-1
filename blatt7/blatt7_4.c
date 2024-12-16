#include <stdio.h>

void reverse(int arr[], int n) {
    int temp[n];
    for (int i = 0; i < n; i++) {
        temp[i] = arr[i];
    }
    for (int i = 0; i < n / 2; i++) {
        arr[i] = arr[n - i - 1];
    }
    for (int i = 0; i < n; i++) {
        arr[n - i - 1] = temp[i];
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
    int n = 10;
    display(arr, n);
    reverse(arr, n);
    display(arr, n);

    int arr2[] = {1, 2, 3, -4, 5, -6, 7, 8};
    int n2 = 8;
    display(arr2, n2);
    reverse(arr2, n2);
    display(arr2, n2);

    return 0;
}
