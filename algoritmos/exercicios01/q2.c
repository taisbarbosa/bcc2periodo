#include <stdio.h>

int multiply(int a, int b){
    int m;
    m=a*b;

    return m;
}

int divide_int(int a, int b){
    int m;
    m=a/b;

    return m;
}
int divide_float(int a, int b){
    float m;
    m=(float)a/(float)b;

    return m;
}

int main(){
    printf("\n___________Multiply ande Divide___________");
    int num1;
    scanf("\n>> first number: %d", &num1);
    int num2;
    scanf("\n>> second number: %d", &num2);

    printf("\n Multiplication: %d", multiply(num1, num2));
    printf("\n Integer Division: %f", divide_int(num1, num2));
    printf("\n Real Division: %f", divide_float(num1, num2));
}