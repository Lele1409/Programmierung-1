#include <stdio.h>

int runde10 (int n) {
  if (n % 10 >= 5) {
    n = (n / 10 + 1) * 10;
  } else if (n % 10 <= 4) {
    n = (n / 10) * 10;
  }

  return n;
};

int rundeSumme (int a, int b, int c) {
  a = runde10(a);
  b = runde10(b);
  c = runde10(c);
  return a + b + c;
}

int main () {
  int a, b, c;
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  printf("%d\n", rundeSumme(a, b, c));
};
