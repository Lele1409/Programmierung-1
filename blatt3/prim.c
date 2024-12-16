#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n = 0;
    bool teilerGefunden = false;

    printf("Bitte Zahl eingeben: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        for (int j = 2, k = i / 2; j <= k; j++) {
            //printf("%d %d %d\n", i, j, k);
            if (i % j == 0) {
                teilerGefunden = true;
            }
        }

        if (!teilerGefunden) {
            printf("Primzahl: %d\n", i);
        }
        teilerGefunden = false;
    }
}