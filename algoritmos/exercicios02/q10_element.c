#include <stdio.h>

//to look for element and replace

void replace_all(int n, int vect[], int elem){

    for (int i = 0; i < n; i++)
    {
        if(vect[i]==elem){
            vect[i]=-1;
        }
    }
}

int main(){
    int n=8;
    int elem= 7;
    int vect[8]={1,4,7,9,15,22,7,7};
    replace_all(n, vect, elem);
}