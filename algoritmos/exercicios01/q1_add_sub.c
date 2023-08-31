#include <stdio.h>

int somar_subtrair(int a, int b){
    int soma;
    int sub;

    printf("\n_____________SOMA_E_SUBTRACAO_____________\n");
    printf("informe dois inteiros para serem somados e subtraidos: \n");

    scanf("a: %d", &a);
    scanf("b: %d", &b);

    soma= a+b;
    sub= a-b;

    printf("\nRESULTADO soma: %d", &soma,"\n");
    printf("RESULTADO sub: %d", &sub,"\n");

}

void main(){
    printf(somar_subtrair(25, 10));
    return 0;
}
main();

main()
{
}
