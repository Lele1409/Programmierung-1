#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp = NULL;
    fp = fopen("blatt5\\test.txt", "r");

    if (fp == NULL) {
        printf("Error opening file \"test.txt\"\n");
        exit(1);
    }

    int char_count = 0;

    int a_count = 0;
    int e_count = 0;
    int i_count = 0;
    int o_count = 0;
    int u_count = 0;

    char c;
    while (!feof(fp)) {
      fscanf(fp, "%c", &c);
      char_count++;

      switch (c) {
        case 'a': a_count++; break;
        case 'A': a_count++; break;
        case 'e': e_count++; break;
        case 'E': e_count++; break;
        case 'i': i_count++; break;
        case 'I': i_count++; break;
        case 'o': o_count++; break;
        case 'O': o_count++; break;
        case 'u': u_count++; break;
        case 'U': u_count++; break;
      }
    }

    fclose(fp);

    printf("char_count = %d\n", char_count);  // Anzahl an Buchstaben und Whitespaces

    printf("a_count = %d\n", a_count);
    printf("e_count = %d\n", e_count);
    printf("i_count = %d\n", i_count);
    printf("o_count = %d\n", o_count);
    printf("u_count = %d\n", u_count);

    return 0;
}
