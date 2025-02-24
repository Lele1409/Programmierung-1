#include <stdio.h>
#include <math.h>

int main() {
    int i;
    int s = 10000;
    double r;

    r = 0;
    i = 0;
    while (i < s) {
        r += pow(-1, i) / (2*i+1);
        i += 1;
    }
    r *= 4;
    printf("Nach 1M Iterationen ist PI laut der Leibniz Reihe: %lf\n", r);


    r = 2;
    i = 1;
    while (i < s) {
        r *= (double) 4*i*i / (4*i*i - 1);

        i += 1;
    }
    printf("Nach 1M Iterationen ist PI laut dem Wallis\'schen Produkt: %lf\n", r);

    return 0;
}
