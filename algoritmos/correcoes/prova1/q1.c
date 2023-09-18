//UMA SEQUENCIA ESTA CONTIDA EM OUTRA? (CONTIGUAS OU NAO)

#include <stdio.h>

int find_seq(int n1, int v1[], int n2, int v2[]){
    if(n1<n2){
        return 0;
    }
    int k=0;
    for(int i=0; i<n1;i++){
        if(v1[i]==v2[k]){
            k++;
            if(k==n2){
                return 1;
            }
        }
    }
}
int main(){
    int v3[]={6,2,8,6,9};
    int v4[]={6,8,9};
    find_seq(5, v3, 3, v4);
}