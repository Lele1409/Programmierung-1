#include <stdio.h>

int minimumRek(int arr[], int n) {
    if (n == 1) {
        return arr[0];
    }
    int restMin = minimumRek(arr, n - 1);
    return (arr[n - 1] < restMin) ? arr[n - 1] : restMin;
}

int minimumIter(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int produktRek(int arr[], int n) {
    if (n == 1) {
        return arr[0];
    }
    return arr[n - 1] * produktRek(arr, n - 1);
}

int produktIter(int arr[], int n) {
    int produkt = 1;
    for (int i = 0; i < n; i++) {
        produkt *= arr[i];
    }
    return produkt;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {5, 3, 8, 2, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array: ");
    printArray(arr, n);

    printf("Minimum (rekursiv): %d\n", minimumRek(arr, n));
    printf("Minimum (iterativ): %d\n", minimumIter(arr, n));

    printf("Produkt (rekursiv): %d\n", produktRek(arr, n));
    printf("Produkt (iterativ): %d\n", produktIter(arr, n));

    return 0;
}
