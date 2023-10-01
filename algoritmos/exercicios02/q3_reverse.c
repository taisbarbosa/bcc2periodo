#include <stdio.h>

int reverse_int(int a){
    int inversion=0;

    while (a/10!=0)
    {
        int m = a%10;
        a=a/10;

        inversion = inversion*10+m;
    }
    inversion = inversion*10+a;
    return inversion;
    
}

int main(){
    int a;
    printf("\n......number.reversed......\n");
    printf("REPORT - ");
    scanf("%d", &a);

    printf("\n > %d", reverse_int(a));
}