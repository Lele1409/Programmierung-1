#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool palindrom(char str[]) {
  unsigned int length = strlen(str);
  if (length == 1 || length == 0) {
    return false;
  }
  for (int i = 0; i < length; i++) {
    if (str[i] != str[length - i - 1]) {
      return false;
    }
  }
  return true;
}

int main() {
  printf("anna -> %s\n", palindrom("anna") ? "true" : "false");
  printf("lagerregal -> %s\n", palindrom("lagerregal") ? "true" : "false");
  printf("weihnachten -> %s\n", palindrom("weihnachten") ? "true" : "false");
  printf("'' -> %s\n", palindrom("") ? "true" : "false");
  printf("A -> %s\n", palindrom("A") ? "true" : "false");
}