#include <stdio.h>

int countOdds(int f[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (f[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int f[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("%d\n", countOdds(f, 10));

    int f2[] = {1, 2, 3, 4, 5};
    printf("%d\n", countOdds(f2, 10));

    int f3[] = {-1, -2, -3, 4, -5, 6, -7, 8, -9, 10};
    printf("%d\n", countOdds(f3, 10));

    return 0;
}
