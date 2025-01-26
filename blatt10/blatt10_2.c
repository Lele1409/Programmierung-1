#include <stdio.h>
#include <string.h>

#define MAX_STRLEN 80
#define NUM_PASSWDS 3

char passwd[NUM_PASSWDS][MAX_STRLEN] = {
    "123foo", "bar456", "bla_blubb"
};

int pwAbfrage (char pass[]) {
    char input[MAX_STRLEN];
    printf("Bitte geben Sie ihr Passwort ein:\n");
    scanf("%s", &input);

    for (int i = 0; i < NUM_PASSWDS; i++) {
      if (strcmp(input, passwd[i]) == 0) {
          return i;
      };
    };

    return -1;
};

int main() {
    short tries = 0;
    while (1) {
        int code = pwAbfrage(passwd);
        tries++;

        if (code != -1) {
            printf("Ihr Passwort wurde gefunden.\n");
            break;
        }
        if (tries >= 3) {
            printf("Sie wurden gesperrt.\n");
            break;
        };
    }

    return 0;
};

