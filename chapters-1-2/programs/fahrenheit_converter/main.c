#include <stdio.h>

#define FREEZING_POINT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void) {
  printf("== Fahrenheit Converter ==\n");

  float fahrenheit, celsius;
  printf("Enter the Fahrenheit temperature: ");
  scanf("%f", &fahrenheit);

  celsius = (fahrenheit - FREEZING_POINT) * SCALE_FACTOR;
  printf("Celsius equivalent: %.1f\n", celsius);

  return 0;
}
