#include <stdio.h>

typedef struct kunde {
    unsigned long nummer;
    char name[100];
    short geb_jahr;
    unsigned short geschlecht;
} Kunde;

int einfuegen(Kunde kdb[], int index) {
    if (index >= 99) {
        printf("Das Anlegen weiterer Kunden ist nicht mehr möglich.\n");
        return index;
    }

    // Wir befuellen das nächste freie Element im Feld
    ++index;

    printf("Nummer des Kunden: \n");
    scanf("%lu", &kdb[index].nummer);
    printf("Name:  \n");
    scanf("%s", &kdb[index].name);
    printf("Geburtsjahr: \n");
    scanf("%hd", &kdb[index].geb_jahr);
    printf("Geschlecht <0=D, 1=W, 2=M>: \n");
    scanf("%hu", &kdb[index].geschlecht);

    return index;
};

int anzeigen(Kunde kdb[], int index) {
    int queried_index;
    printf("Position des Kunden in der DB: \n");
    scanf("%d", &queried_index);

    if (queried_index > index || queried_index < 0) {
        printf("Es existiert kein Kunde an dieser Position.\n");
        return index;
    }

    printf("Kundennummer: %d\n", kdb[index].nummer);
    printf("Name: %s\n", kdb[index].name);
    printf("Geburtsjahr: %d\n", kdb[index].geb_jahr);
    printf("Geschlecht: %d\n", kdb[index].geschlecht);
};

int main() {
    Kunde kdb[100];
    int highest_index = -1;

    short response = -1;
    while (response != 0) {
        printf("<1> Neuen Datensatz anlegen\n");
        printf("<2> Vorhandenen Datensatz abrufen\n");
        printf("<0> Ende\n");
        printf("  Ihre Wahl:\n");
        scanf("%d", &response);

        if (response == 1) {
            highest_index = einfuegen(kdb, highest_index);
        }
        else if (response == 2) {
            anzeigen(kdb, highest_index);
        }
    }

    printf("Sie haben das Programm beendet.\n");

    return 0;
};