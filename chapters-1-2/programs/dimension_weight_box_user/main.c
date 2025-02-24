#include <stdio.h>

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
  weight = (volume + 165) / 166;
  printf("Volume: %d\n ", volume);
  printf("Weight: %d\n ", weight);

  return 0;
}
