#include <stdio.h>

#define INCHES_PER_POUND 166

int main(void) {
  printf("=== Compute Dimension of a Box by User input ===\n");
  int height, width, length, weight, volume;
  printf("Enter the height: ");
  scanf("%d", &height);
  printf("Enter the length: ");
  scanf("%d", &length);
  printf("Enter the width: ");
  scanf("%d", &width);

  volume = height * width * length;
  weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;
  printf("Volume: %d\n ", volume);
  printf("Weight: %d\n ", weight);

  return 0;
}
