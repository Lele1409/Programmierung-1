#include <stdio.h>
#include <stdbool.h>

/*
bool mauern (int klein, int gross, int ziel) {
  return klein + gross*5 >= ziel;
}
*/

bool mauern (int klein, int gross, int ziel) {
  if (ziel == 0) {
    return true;
  } else if (ziel - 5 >= 0 && gross > 0) {
    return mauern (klein, gross - 1, ziel - 5);
  } else if (ziel - 1 >= 0 && klein > 0) {
    return mauern (klein - 1, gross, ziel - 1);
  } else {
    return false;
  }
}


int main () {
    int k, g, z;
    scanf("%d", &k);
    scanf("%d", &g);
    scanf("%d", &z);
    printf("%s\n", mauern(k, g, z) ? "true" : "false");
};
