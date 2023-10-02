#include <stdio.h>

//greatest common divisor (gcd)

int gcd(int a, int b){
    int half1 = a/2;
    int half2 = b/2;

    if(a<=b){
        if(b%a==0){
            return a;
        }else{
            if(b%half1==0){
                return half1;
            }else{
                while(b%half1!=0){
                    half1 = half1--;
                }
                return half1;
            }
        }
    }
    if(a>=b){
        if(a%b==0){
            return b;
        }else{
            if(a%half2==0){
                return half2;
            }else{
                while(a%half2!=0){
                    half2 = half2--;
                }
                return half2;
            }
        }
    }
}

int main(){

    printf("\n.....greatest.common.divisor.....\n");
    int a=30;
    int b=12;
    printf("DIVISOR FOR %d AND %d: %d\n", a, b, gcd(a, b));
}