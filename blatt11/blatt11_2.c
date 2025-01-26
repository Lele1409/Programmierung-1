#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *) malloc(20 * sizeof(int));

    if (ptr == NULL) {
        printf("malloc failed\n");
        return 1;
    }

    for (int i = 0; i < 20; i++) {
        *ptr = 0;
    }

    for (int i = 0; i < 20; i++) {
        printf("%d: %d\n", i, ptr[i]);
    }

    free(ptr);

    return 0;
}
