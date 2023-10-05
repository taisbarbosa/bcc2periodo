#include <stdio.h>

void set_zero(int* pa){
    *pa=0;
}

int main(){
    int a = 5;
    set_zero(&a);
    printf("a: %d\n", a);

    return 0;
}