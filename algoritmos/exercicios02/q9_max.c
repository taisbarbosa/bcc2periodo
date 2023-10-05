#include <stdio.h>

//largest number

int find_max(int n, int vect[]){

    int max = vect[0];

    for (int i = 1; i < n; i++)
    {
        if(vect[i]>max){
            max=vect[i];
        }
    }
    return max;
}

int main(){
    int n=8;
    int vect[8]={1,4,7,9,15,22,48,20};
    printf("\n%d\n", find_max(n, vect));
}