#include <stdio.h>

int sum(int n) {
    if (n <= 1) {
        return n;
    } else {
        return n + sum(n - 1);
    }
}

int fakultaet(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * fakultaet(n - 1);
    }
}

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;

    printf("Geben Sie eine Zahl für die Summationsfunktion ein: ");
    scanf("%d", &n);
    printf("Summe von 1 bis %d: %d\n", n, sum(n));

    printf("Geben Sie eine Zahl für die Fakultätsberechnung ein: ");
    scanf("%d", &n);
    printf("Fakultät von %d: %d\n", n, fakultaet(n));

    printf("Geben Sie eine Zahl für die Fibonacci-Zahl ein: ");
    scanf("%d", &n);
    printf("Fibonacci-Zahl für %d: %d\n", n, fibonacci(n));

    return 0;
}
