#include <stdio.h>

int somar(int a, int b){
    int soma = a+b;

    return soma;
}
int subtrair(int a, int b){
    int sub = a-b;

    return sub;
}
int main(){
    int n1;
    int n2;
    printf("informe 2 numeros\n");

    scanf("%d  %d", &n1, &n2);

    printf("Soma = %d\n", somar(n1, n2));
    printf("Subtracao = %d\n", subtrair(n1, n2));


    return 0;

}