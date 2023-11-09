#include <stdio.h>

int get_largest(int a, int b) {
    if (a > b){
        return a;
    }else{
        return b;
    }
}


int main(){
    int (*p_largest)(int,int) = get_largest;
    printf("latgest element: %d\n", p_largest(5,9));
    return 0;
}