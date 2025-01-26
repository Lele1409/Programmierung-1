#include <stdio.h>

int main() {
    int x, n = 10, *y = &n;
    printf("%d, %p\n", x, &x);
    printf("%d, %p\n", n, &n);
    printf("%d, %p\n", y, &y);

    return 0;
}
