#include <stdio.h>

int remainder(int a, int b){
    int remainder = a%b;

    return remainder;
}
int remainder2(int a, int b){
    int d = a/b;
    if (d!=0){
        int remainder = a-(d*b);

        return remainder;
    }else{
        return d;
    }
}
int main(){
    int a;
    int b;
    printf("\nRemainders")
    scanf("")
}