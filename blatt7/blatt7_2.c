#include <stdio.h>
#include <stdbool.h>

bool firstLast8(int arr[], int n) {
    return arr[0] == 8 || arr[n - 1] == 8;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    const int n = 10;
    printf("%s\n", firstLast8(arr, n) ? "true" : "false");

    int arr2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 8};
    printf("%s\n", firstLast8(arr2, n) ? "true" : "false");

    int arr3[] = {8, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("%s\n", firstLast8(arr3, n) ? "true" : "false");

    return 0;
}
