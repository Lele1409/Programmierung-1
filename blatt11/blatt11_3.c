#include <stdio.h>

int main() {
    int myArray[10];

    for (int i = 0; i < 10; i++) {
        myArray[i] = 5;
    }

    int *ip = myArray;
    ip += 2;

    *ip = 10;

    for (int i = 0; i < 10; i++) {
        printf("%d\n", myArray[i]);
    }


    return 0;
}