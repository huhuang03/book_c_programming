#include <stdlib.h>
#include <stdio.h>

float fahr2celsius(float fahr);
float celsius2fahr(float celsius);

int main() {
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  printf("fahr to celsius table\n");
  for (fahr = upper; fahr >= lower; fahr -= step) {
    celsius = fahr2celsius(fahr);
    printf("%3.0f\t%6.1f\n", fahr, celsius);
  }

  printf("celsius to fahr table\n");

  lower = -20;
  upper = 150;
  step = 10;
  celsius = lower;
  while (celsius <= upper) {
    fahr = celsius2fahr(celsius);
    printf("%3.0f\t%6.1f\n", celsius, fahr);
    celsius += step;
  }
}

float fahr2celsius(float fahr) {
    return (5.0 / 9.0) * (fahr - 32);
}

float celsius2fahr(float celsius) {
    return celsius / (5.0 / 9.0) + 32;
}
