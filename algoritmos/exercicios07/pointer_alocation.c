#include <stdio.h>
#include <stdlib.h>

// q01. allocates an array of integers of size n, padded with zeros, on the heap, and returns your address
int* create_vector(int n){
  int *v = calloc(n * sizeof(int));
  for(int i = 0; i<n; i++){
      printf("%p ", v[i]);
  }
  printf("\n %p  ", v);
  int *a = *v;
  free(v);
  return a;
}

// q02
int* get_largest(int n, int* v, int max) {
  int min = v[0];
  for(int i = 1; i<n; i++){
    if (min>v[i]){
      min = v[i];
    }
  }
  int max2[max] = malloc(max * sizeof(int));
  int position = 0;
  if(max<n){
    for(int i = 0; i<max; i++){
      for(int j = 0; j<n; j++){
        int max3 = v[0];
        if (max3<v[j]){
          max3 = v[i];
          position = j;
        }
        max2[i]=max3;
        v[position] = min;
      }
    }
  }else{
    for(int i = 0; i<n; i++){
      max2[n]= v[n];
    }
  }
  return max2;
}

int main(){
    // q01
    printf("address: %p", create_vector(5));

    // q02
    int n = 7;
    int v[] = {5,12,8,3,4,2,1};
    int max = 2;
    printf("\n%d  ",get_largest(n, v, max));
    
}