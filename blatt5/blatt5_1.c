#include <stdio.h>

int main() {
  int in = 0;
  int min = 0;

  for (int i = 0; i < 10; i++) {
    printf("Bitte geben Sie noch %d ganze Zahlen ein: ", 10 - i);
    scanf("%d", &in);

    if (in <= 0) {
      i--;
    } else if (min == 0) {
      min = in;
    } else if (min > in) {
      min = in;
    }
  }

  printf("Die kleinste Zahl ist %d\n", min)

  return 0;
}