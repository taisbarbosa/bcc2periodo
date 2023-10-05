#include <stdio.h>

//reverse vector

void reverse(int n, int vect[]){
    int vect2[n];
    for (int i = 0; i < n; i++)
    {
        vect2[i]=vect[i];
    }
    for (int i = 1; i <= n; i++)
    {
        vect[i-1]=vect2[n-i];
    }
}

int main(){
    int n=4;
    int vect[4]={1,4,7,9};
    reverse(n, vect);
}