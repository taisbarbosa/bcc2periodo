#include <stdio.h>

//count each number

void count_elements(int n, int vect[])
{
    int count=0;
    int count2=0;
    int vector_size=0;

    int n2=1;
    int vect2[n2];
    for (int i = 0; i < n; i++)
    { 
        
        for (int m = 0; m < n2; m++){
            if(i>0 && vect[i]==vect2[m]){
                count++;
            }
        }
        if(count==0){
            for (int m = i; m < n; m++){
                if(vect[i]==vect[m]){
                    count2++;
                }
            }
            printf("\n %d   %d \n", vect[i], count2);
        }
        vect2[i]=vect[i];
        count=0;
        count2=0;
        n2++;
    }
} 
int main(){
    int n=6;
    int vect[6] = {13, 14, 13, 13, 13, 14};
    count_elements(n, vect);
    printf("\n");
    for(int i=0; i<n; i++){
        printf(" %d ",vect[i]);
    }
    printf("\n");
}