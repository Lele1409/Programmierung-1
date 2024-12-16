#include <stdio.h>

int main() {
    int arr[5] = {1, -2, 3, -4, 0};
    int arr_len = 5;

    int max = 0;
    int min = 0;
    for (int i = 1; i < arr_len; i++) {
        // max
        if (arr[i] > arr[max]) {
            max = i;
        }
        if (arr[i] < arr[min]) {
            min = i;
        }
    }

    printf("maximaler Wert = %d, minimaler Wert = %d\n", arr[max], arr[min]);

    return 0;
}
