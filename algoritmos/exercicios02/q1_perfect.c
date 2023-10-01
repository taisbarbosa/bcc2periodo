#include <stdio.h>

int is_perfect_number(int a){
    int count=0;
    for(int i=1; i<a; i++){
        if(a%i==0){
            count++;
        }
    }
    int vector[count];
    int j=0;
    for(int i=1; i<a; i++){
        if(a%i==0){
            vector[j]=i;
            j++;
        }
    }
    int sum=0;
    printf("\nSum of the divisors: ");
    for(int i=0; i<count; i++){
        sum=sum+vector[i];
        printf("%d + ", vector[i]);
    }
    printf("\b\b= %d", sum);

    if(sum==a){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int a;
    printf("\n. . . . . . . PERFECT . NUMBER . . . . . . .\n");
    printf("Report a number: ");
    scanf("%d", &a);

    if(is_perfect_number(a)==1){
        printf("\nPerfect? Yes.");
    }else{
        printf("\nPerfect? Not.");
    }

    return 0;
}