#include <stdio.h>
#include <limits.h>

int find_max(int n, int vet[]){
    //recebe um vetor vet de tamanho n e devolve o maior valor contido no vetor

    int max = INT_MIN;

    for (int i = 0; i < n; i++){
        if(vet[i]>max){
            max=vet[i];
        }
    }
    return max;
}

void main(){
    find_max(4, (1,2,3, 4));
}


