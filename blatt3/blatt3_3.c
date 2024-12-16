#include <stdio.h>

int main() {
  for (int i=1; i <= 100; i++) {
    if (i*i*i - 73*i*i + 1655*i - 11951 == 0) {
      printf("%d\n", i);
    }
  }

  return 0;
}