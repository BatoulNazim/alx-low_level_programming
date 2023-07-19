#include <stdio.h>

void times_table(void) {
  int i, j;
  for (i = 0; i <= 9; i++) {
    for (j = 0; j <= 9; j++) {
      if (j == 0) {
        printf("%d ", i);
      } else {
        printf("%d ", i * j);
      }
    }
    printf("\n");
  }
}
