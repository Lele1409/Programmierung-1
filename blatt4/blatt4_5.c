#include <stdio.h>

int main() {
    // Von der Aufgabe ausgehend hätte ich jetzt vermutet, dass
    // die Ergebnisse nicht die Erwarteten werden, sie waren es aber.
    printf("0.1 + 0.2 = %.6f\n", 0.1 + 0.2);

    printf("0.1 + 0.3 = %.6f\n", 0.1 + 0.3);
    // Waeren die Zahlen nicht die arithmetisch Richtigen gewesen, hätte dies an der
    // Konvertierung von Dezimalzahlen zu Binaerzahlen gelegen.

    float s;
    double S;

    printf("MIT FLOATS:\n");

    s = 0;
    for (double n = 1; n < 10000; n++) {
        s += 1/n;
    }
    printf("Die Summe der ersten 10.000 Summanden der harmonischen Reihe ergibt: %.6f\n", s);

    s = 0;
    for (double n = 1; n < 100000; n++) {
        s += 1/n;
    }
    printf("Die Summe der ersten 100.000 Summanden der harmonischen Reihe ergibt: %.6f\n", s);

    s = 0;
    for (double n = 1; n < 1000000; n++) {
        s += 1/n;
    }
    printf("Die Summe der ersten 1.000.000 Summanden der harmonischen Reihe ergibt: %.6f\n", s);

    printf("MIT DOUBLES:\n");

    S = 0;
    for (double n = 1; n < 10000; n++) {
        S += 1/n;
    }
    printf("Die Summe der ersten 10.000 Summanden der harmonischen Reihe ergibt: %.6f\n", S);

    S = 0;
    for (double n = 1; n < 100000; n++) {
        S += 1/n;
    }
    printf("Die Summe der ersten 100.000 Summanden der harmonischen Reihe ergibt: %.6f\n", S);

    S = 0;
    for (double n = 1; n < 1000000; n++) {
        S += 1/n;
    }
    printf("Die Summe der ersten 1.000.000 Summanden der harmonischen Reihe ergibt: %.6f\n", S);

    // Mit Doubles sind die Ergebnisse näher an den Korrekten Annäherungen

    return 0;
}
