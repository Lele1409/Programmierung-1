#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    FILE *fp = NULL;
    fp = fopen("blatt5\\werte.txt", "r");

    if (fp == NULL) {
        printf("Error opening file \"werte.txt\"\n");
        exit(1);
    }

    int max = INT_MIN;

    while (!feof(fp)) {
        int a;

        fscanf(fp, "%d", &a);
        if (a > max) {
            max = a;
        }
    }

    fclose(fp);

    fp = fopen("ergebnis.txt", "w");

    if (fp == NULL) {
        printf("Error opening file \"ergebnis.txt\"\n");
        exit(1);
    }

    fprintf(fp, "%d", max);

    return 0;
}
