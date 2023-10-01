#include <stdio.h>
/*Informe o numero:
> 132
2 x fator 2
1 x fator 3
1 x fator 11
3. Escreva uma função q*/

int print_factors(int a){
    int m = a;
    int n=2;
    int c1=0;
    for(int i=n; i<a; i++){
        while(m%i==0){
            m=m/i;
            c1++;
        }
        if(c1!=0){
            printf("\n%d x fator %d\n", c1, i);
        }
        c1=0;
    }
}

int main(){
    int a;

    printf("\nREPORT: \n");
    scanf("%d", &a);

    printf("\n%d",print_factors(a));
}
