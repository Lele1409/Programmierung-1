#include <stdio.h>

int ggT (int a, int b) {
  while (a != b) {
    if (a > b) {
      a -= b;
    } else {
      b -= a;
    }
  }
  return a;
};

int main () {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d\n", ggT(a, b));
};
