#include <stdio.h>

int main() {
    int eingabe = 0;
    long long resultat = 1;

    printf("Bitte geben sie eine positive ganze Zahl ein: ");
    scanf("%d", &eingabe);

    int i;

    i = 2;
    while (i <= eingabe) {
        resultat *= i;
        i += 1;
    }

    printf("%d\n", resultat);

    return 0;
}


// Einige Maximalwerte für folgende Datentypen:

// i  : 2,147,483,647
// ui : 4,294,967,295
// sind jeweils kleiner als 13! = 6,227,020,800
// also ist der Grenzwert 12.

// ll :  9,223,372,036,854,775,807
// ull: 18,446,744,073,709,551,615
// sind jeweils kleiner als 20! = 2,432,902,008,176,640,000
// also ist der Grenzwert 19.
