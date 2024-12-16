#include <stdio.h>

int main() {
    int x = 0;
    printf("Geben sie eine positive Ganzzahl ein: ");
    scanf("%d", &x);
    int X = x;

    int qs = 0;
    int z = 0;

    while (x > 0) {
          z = x % 10;
          x = x / 10;
          qs += z;
          printf("%d %d %d \n", x, qs, z);
    }

    printf("Die Quersumme ist %d\n", qs);

    x = X;
    qs = 0;
    z = 0;

    while (!(qs > 0 && qs < 10)) {
        qs = 0;
        while (x > 0) {
            z = x % 10;
            x = x / 10;
            qs += z;
            printf("%d %d %d \n", x, qs, z);
        }
        x = qs;
    }

    printf("Die iterierte Quersumme ist %d\n", qs);

    return 0;
}