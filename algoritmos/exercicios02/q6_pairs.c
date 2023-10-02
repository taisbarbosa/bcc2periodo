#include <stdio.h>

//pairs from the vector

void print_even(int n, int vect[]){
    printf("\n[ ");
    for(int i = 0; i < n; i++){
        if(vect[i]%2==0){
            printf(" %d,", vect[i]);
        }
    }
    printf("\b ]\n");
}

int main(){
    int n = 4;
    int vect[4]={34, 56, 78, 99};

    print_even(n, vect);
}