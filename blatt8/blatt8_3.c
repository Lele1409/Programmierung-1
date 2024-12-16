#include <stdio.h>
#include <string.h>

void entferne(char str[], char c) {
    unsigned int length = strlen(str);
    int displace = 0;
    for (unsigned int i = 0; i < length; i++) {
        if (str[i] == c && displace == 0) {
            displace++;
        }
        if (displace) {
            str[i] = str[i + 1];
        }
    }
    str[length] = '\0';
}

int main() {
    char str[] = "Testwort";
    entferne(str, 'w');
    printf("%s\n", str);

    char str2[] = "Weihnachten";
    entferne(str2, 'n');
    printf("%s\n", str2);

    char str3[] = "Hund";
    entferne(str3, 'a');
    printf("%s\n", str3);

    char str4[] = "";
    entferne(str4, 'x');
    printf("%s\n", str4);

    char str5[] = "mm";
    entferne(str5, 'm');
    printf("%s\n", str5);

    char str6[] = "Hello World";
    entferne(str6, ' ');
    printf("%s\n", str6);
}
