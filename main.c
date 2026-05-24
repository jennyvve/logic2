
#include "stdio.h"

int main(void) {

  int sum = 0;
  for (int i = 1; i < 9; i++) {
    if (i & 0x1) {
      sum += -i;
    } else {
      sum += i;
    }
  }
  printf("%i, %f\n", sum, ((float)sum / (float)8));

  sum = 0;
  for (int i = 1; i < 7; i++) {
    sum += i;
  }
  printf("%i, %f\n", sum, ((float)sum / (float)6));

  sum = 0;
  for (int i = 1; i < 9; i++) {
    if (i & 0x1) {
      sum += -(i * i);
    } else {
      sum += i * i;
    }
  }
  printf("%i, %f\n", sum, ((float)sum / (float)8));
  return 0;
}