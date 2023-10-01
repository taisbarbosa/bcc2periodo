#include <stdio.h>

void print_float(float number){
  int count1= number/1;
  float part_f = number - count1;
  int count2;
  float div = number;
  while(div>=1){
     div = div/(float)10;
    count2++;
  }
  
  printf("\nNumber: %.2f", number);
  printf("\nInteger: %d", count1);
  printf(" Float: %.2f", part_f);
  printf("\nNotation: %.4f", div);
  printf(" x %d", 10);
  printf("^%d", count2);
  printf("\n");
  
}

int main(){
  print_float(12.5);
  return 0;
}
