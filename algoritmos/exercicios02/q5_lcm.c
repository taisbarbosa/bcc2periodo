#include <stdio.h>

//Least Common Multiple

int lcm(int a, int b){
    int multiple1 = a*2;
    int multiple2 = b*2;
    int i1=3;
    int i2=3;

    if(a<=b){
        if(a*2==multiple2){
            return multiple2;
        }
        while(a*i1!=multiple2){
            if(a*i1>multiple2){
                multiple2=b*i2;
                i2++;
            }
            i1++;
        }
        return multiple2;
    }

    if(a>=b){
        if(b*2==multiple1){
            return multiple1;
        }
        while(b*i1!=multiple1){
            if(b*i1>multiple1){
                multiple1=a*i2;
                i2++;
            }
            i1++;
        }
        return multiple1;
    }

}

int main(){

    printf("\n.....least.common.multiple.....\n");
    int a=100;
    int b=34;
    printf("MULTIPLE FOR %d AND %d: %d\n", a, b, lcm(a, b));
}