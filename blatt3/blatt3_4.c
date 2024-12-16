#include <stdio.h>

int main() {
    int x = 0;
    printf("Geben sie einen Integer ein: ");
    scanf("%d", &x);

    int t = 2;
    int s = 0;

    while (x > 0 && t <= x) {
        if (x % t == 0) {
            s += t;
            t += 1;
        } else {
            t += 1;
        }
    }

    s += 1; // Denn "1" ist immer ein Teiler einer Zahl

    printf("%d ist die Summe aller Teiler.", s);

    return 0;
}