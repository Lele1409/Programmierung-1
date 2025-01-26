#include <stdio.h>

// Rekursive Implementierung der Ackermann-Funktion
unsigned int ackermann(unsigned int n, unsigned int m) {
    if (n == 0) {
        return m + 1;
    } else if (m == 0) {
        return ackermann(n - 1, 1);
    } else {
        return ackermann(n - 1, ackermann(n, m - 1));
    }
}

int main() {
    unsigned int n, m;
    printf("Geben Sie n und m ein (zwei natürliche Zahlen): ");
    scanf("%u %u", &n, &m);

    // Berechnung der Ackermann-Funktion
    unsigned int result = ackermann(n, m);
    printf("ackermann(%u, %u) = %u\n", n, m, result);

    return 0;
}
