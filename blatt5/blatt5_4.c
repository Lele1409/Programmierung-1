#include <stdio.h>

int main()
{
    int a, b;
    int result = 0;

    // TODO; zuerst a und b noch einlesen:
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter another number: ");
    scanf("%d", &b);

    if (b == 0) {
        printf("Durch zwei teilen ist unmöglich\n");
        return 0;
    }

    // Dies soll Integer-Division a / b umsetzen:
    while (a - b >= 0) {
        result++;
        a = a - b;
    }

    printf("%d\n", result);

    return 0;
}

// 17 und 4 gibt 4 aus, dies ist richtig
// 100 und 1 gibt 99 aus, dies ist falsch
// Durch lange genug auf den Code schauen ist aufgefallen, dass das '>' ein '>=' sein sollte
// 100 und 1 gibt 100 aus, dies ist nun richtig
// 100 und 0 gibt einen Fehler aus, dies ist nicht richtig, der Fehler muss gefangen werden
// 0 und 100 gibt 0 das ist richtig
// 100 und 100 gibt 1 das ist richtig

// Des weiteren gälte es zu definieren ob unter ganzzahligen Divisionen auch die Berchnung mit
// negativen Ganzzahlen betrachtet werden soll, für welche dieses Programm auch Fehler aufwirft.