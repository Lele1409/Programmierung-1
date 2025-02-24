#include <stdio.h>

int main() {
    int max = 0;
    int eingabe = 0;

    printf("ABBRUCH VERSION\n\n");

    for (int i = 0; i < 10; i++) {
        printf("Geben sie eine Zahl ein: ");
        scanf("%d", &eingabe);

        if (eingabe < 0) {
            break;
        } else if (eingabe > max) {
            max = eingabe;
        }
    }

    printf("Die groesste Zahl war die Zahl %d", max);


    max = 0;
    eingabe = 0;

    printf("\n\nIGNORANZ VERSION\n\n");

    for (int i = 0; i < 10; i++) {
        printf("Geben sie eine Zahl ein: ");
        scanf("%d", &eingabe);

        if (eingabe < 0) {
            i -= 1;
            continue;
        } else if (eingabe > max) {
            max = eingabe;
        }
    }

    printf("Die groesste Zahl war die Zahl %d", max);

    return 0;
}
