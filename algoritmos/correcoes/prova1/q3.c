#include <stdio.h>

int count_inc_seq(int n1, int v1[]){
    int n=1, count=0;
    for(int i=0; i<n1-1; i++){
        if(v1[i+1]-v1[i]==1){
            n++;
        }else{
            if(n>=2){
                count++;
                n=1;
            }
        }
    }
    if(n>=2){
        count++; 
    }
    return count;
}
int main(){
    int v[]={1,6,10,11,12,45,67,88,89};
    printf("%d", count_inc_seq(9, v));
    return 0;
}