#include <stdio.h>

void set_positive(int n, int vect[]){
    for(int i=0; i<n; i++){
        if(vect[i]<0){
            vect[i]=vect[i]*(-1);
        }
    }
}

int main(){
    int n=4;
    int vect[4]={22, -5, -77, 3};
    set_positive(n, vect);
    printf("\n");
    for(int i=0; i<n; i++){
        printf(" %d ",vect[i]);
    }
    printf("\n");
}