#include <stdio.h>
#include <stdbool.h>

int main() {
  printf("a)\n");

  for (int c = 100; c <= 200; c++) {
    printf("%d\n", c);
    };

  printf("\nb)\n");

  for (int c = 112; c <= 222; c = c + 2) {
    printf("%d\n", c);
  }

  printf("\nc)\n");

  for (int c = 333; c >= 222; c = c - 3) {
    printf("%d\n", c);
  }

  printf("\nd)\n");

  int s = 0;
  for (int c = 0; c <= 1000; c = c + 3) {
    s += c;
  }
  printf("%d\n", s);

  printf("\ne)\n");

  int n = 0;  // Wenn der Benutzer nichts eingibt wird false augegeben
  bool f = false;
  printf("Bitte gebe eine Ganzzahl ein: ");
  scanf("%d", &n);
  while (n > 0 && f == false) {
    if (n % 10 == 7) {
      f = true;
    } else {
      n = n / 10;
    }
  }
  printf("%s\n", f ? "true" : "false");

  printf("\nf)\n");

  int N = 0;
  int C = 0;
  printf("Bitte gebe eine Ganzzahl ein: ");
  scanf("%d", &N);
  while (N > 0) {
    if (N % 10 == 7) {
      C++;
    }
    N = N / 10;
  }
  printf("%d\n", C);



  return 0;
};