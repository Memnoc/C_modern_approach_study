#include <stdio.h>

int main(void) {
  printf("=== Compute the Dimensional Weight of a Box ===\n");
  // Formula: weight = (volume + 165) / 166;
  int height, weight, length, width, volume;

  height = 8;
  length = 12;
  width = 10;
  volume = height * length * width;
  weight = (volume + 165) / 166;

  printf("Dimensions: %dx%dx%dx\n", length, width, weight);
  printf("Volume (cubic inches) : %d\n", volume);
  printf("Dimensional weight (pounds) : %d\n", weight);

  return 0;
}
