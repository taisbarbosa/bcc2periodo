#include <stdio.h>
#include <stdlib.h>

// q01. allocates an array of integers of size n, padded with zeros, on the heap, and returns your address
int* create_vector(int n){
    int *v = malloc(n * sizeof(int));
    for(int i = 0; i<n; i++){
        v[i] = 0;
        printf("%p ", v[i]);
    }
    printf("\n %p  ", *v);
    int *a = *v;

    free(v);
    return a;
}
int main(){
    printf("address: %p", create_vector(5));
}