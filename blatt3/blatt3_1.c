#include <stdio.h>

int main() {
    int a, b;

    printf("Enter a integer:\n");
    scanf("%d", &a);
    printf("Enter another integer:\n");
    scanf("%d", &b);

    int r_a = a % 10;
    int r_b = b % 10;

    if (r_a == r_b) {
        printf("Letzte Ziffer gleich\n");
    };

    return 0;
};
