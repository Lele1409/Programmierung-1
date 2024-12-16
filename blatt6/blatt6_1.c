#include <stdio.h>

float holeWert(char c);
float berechneSpannung(float r, float i);
float berechneStrom(float u, float r);
float berechneWiderstand(float u, float i);
void zeigeErgebnis(char c, float x);

int main() {
  float u, r, i;
  i = holeWert('I');
  r = holeWert('R');
  u = berechneSpannung(r, i);
  zeigeErgebnis('U', u);

  char calc;
  while (1) {
    printf("Moechten Sie Spannung ('U'), Strom ('I') oder Widerstand ('R') berechnen?\n");
    // The leading whitespace in the "format" parameter
    // is needed or else C will read the newline from the
    // last input as a separate character
    scanf(" %c", &calc);
    if (calc == 'U') {
      printf("U = %f\n", berechneSpannung(r, i));
  	} else if (calc == 'I') {
      printf("I = %f\n", berechneStrom(u, r));
    } else if (calc == 'R') {
      printf("R = %f\n", berechneWiderstand(u, i));
    } else {
      printf("Bitte geben sie einen der folgenden Buchstaben ein: 'U' oder 'I' oder 'R'.\n ");
    }
  }
}

float holeWert(char c) {
  float value;
  printf("%c eingeben: ", c);
  scanf("%f", &value);
  return value;
}

float berechneSpannung(float r, float i) {
  return r * i; // Spannung U = R * I
}

float berechneStrom(float u, float r) {
  return u / r; // Spannung I = U / R
}

float berechneWiderstand(float u, float i) {
  return u / i; // Spannung R = U / I
}

void zeigeErgebnis(char c, float x) {
  printf("%c betraegt: %f\n", c, x);
}
