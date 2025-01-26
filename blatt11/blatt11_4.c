#include <stdio.h>

#define DIM 3
typedef float Vec3[DIM];

void read_data (Vec3 v); // x, y, z einlesen
void show_data (Vec3 v); // Vektor ausgeben
void add (Vec3 res, Vec3 a, Vec3 b); // Vektoraddition
void sub (Vec3 res, Vec3 a, Vec3 b); // Vektorsubtraktion
float skalar (Vec3 a, Vec3 b); // Skalarprodukt
void cross (Vec3 c, Vec3 a, Vec3 b); // Kreuzprodukt

void show_data(Vec3 v) {
    printf("x = %f\n", v[0]);
    printf("y = %f\n", v[1]);
    printf("z = %f\n", v[2]);
}

void cross(Vec3 c, Vec3 a, Vec3 b) {
    c[0] = a[1] * b[2] - b[1] * a[2];
    c[1] =  b[0] * a[2] - a[0] * b[2];
    c[2] =  a[0] * b[1] - b[0] * a[1];
}

int main() {
    Vec3 u, v, w;
    u[0] = 1;
    u[1] = 0;
    u[2] = 0;
    v[0] = 0;
    v[1] = 1;
    v[2] = 0;

    cross(w, u, v);
    printf("Values for the crossproduct of u and v:\n")
    show_data(w);

    printf("Values for the crossproduct of u and v, with u being modified simultaneously:\n")
    cross(u, u, v);  // Wir berechnen u mit den in den bereits abgeschlossenen Zwischenschritten modifiezierten Werten.
    // In anderen Worten: der Wert im Ausgang ist nicht das Kreuzprodukt von u und v, da ab dem zweiten Rechenschritt u nicht mehr das originale u vom Input ist.
    show_data(u);

    return 0;
}
