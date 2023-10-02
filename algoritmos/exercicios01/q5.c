#include <stdio.h>

void print_mult_table(int number) {
  for (int i = 1; i <= 10; i++) {
    int mult = 0;
    mult = number * i;

    printf("\n%d", number);
    printf(" x %-2d", i);
    printf(" = %-2d", mult);
  }
  printf("\n");
}
