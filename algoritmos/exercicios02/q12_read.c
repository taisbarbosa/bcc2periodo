
#include <stdio.h>

//put number read in the vector

void read_vector(int n, int vect[])
{
    int scanner;
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &scanner);
        vect[i]=scanner;
    }
    printf("\n");
}

int main(){
    int n=4;
    int vect[4];
    read_vector(n, vect);
    printf("\n");
    for(int i=0; i<n; i++){
        printf(" %d ",vect[i]);
    }
    printf("\n");
}