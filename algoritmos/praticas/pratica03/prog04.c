#include <stdio.h>
#include <limits.h>

int find_max(int n, int vet[]){
    //recebe um vetor vet de tamanho n e devolve o maior valor contido no vetor

    int max = INT_MIN;
    int i;
    for (i = 0; i < n; i++){
        if(vet[i]>max){
            max=vet[i];
        }
    }
    return max;
}

int main(){

    int v[]= {3, 10, -4, 6};

    printf("maior: %d \n", find_max(4, v));

    return 0;
}


