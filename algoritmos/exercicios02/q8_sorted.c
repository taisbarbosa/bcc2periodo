#include <stdio.h>

int is_sorted(int n, int vect[]){
    int vtrue;
    for(int i=1; i<n; i++){
        if(vect[i]>vect[i-1]){
            vtrue =  1;
        }else{
            vtrue = 0;
            break;
        }
    }
    return vtrue;
}

int main(){
    int n=8;
    int vect[8]={1,4,7,9,15,22,48,512};
    printf("\n");
    if(is_sorted(n, vect)==1){
        printf("The vector's sorted!");
    }else{
        printf("The vector not's sorted!");
    }
    printf("\n");
}