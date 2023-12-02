#include <stdio.h>


int exemplo(int temp){ 
    temp = temp+1;
    return temp;
}

int executar(int a0){ 
    int t2 = 0;
    int temp = 0;   
    printf("\n");
    while(t2!=a0){  
        t2 = t2+1;
        printf("%d  ", t2); 
        temp = temp+1;
    }
    t2 = t2+ 4294967300;  
    printf("\n%d\n", t2);

    t2 = 0;               
    printf("%d\n", t2);
}

int main(){

    int s0 = 7;
    executar(s0);
}