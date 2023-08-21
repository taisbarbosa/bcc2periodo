#include <stdio.h>

void imprimirCaixa(int countlinhas, int countcolunas){
    for (int i = 0; i < countlinhas; i++)
    {
        for (int j = 0; j < countcolunas; j++)
        {
            printf("🔁");
        }
        printf("\n");
    }
}

int main(){
    imprimirCaixa(4, 4);
    return 0;
}