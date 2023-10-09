#include <stdio.h>

//int main(int n, char [n][50]){}

void set_value(int* end, int value){
    *end = value;
}
void print_vector(int n, int *vector){
    char *p = (char*)vector;

    for (int i = 0; i < n*4; i++){
        if(i%4==0){
            printf("  ");
        }
        printf("%X", *p);
        p++;
        
    }

}

void test(){
    int vector[] = {50,60, 3, 44, 1};

    printf("first content of the vector:  %d\n", vector[0]);
    printf("first content of the vector:  %d\n", *vector);
    printf("second content of the vector: %d\n", *(vector+1));

    int* p = vector;

    printf("\n> accesses the integer whose address is in p: \n");
    for (int i = 0; i < 5; i++)
    {
        if (i>0){
            printf(",");
        }
        printf(" %d", *p);         //accesses the integer whose address is in p
        p++;
    }
}

struct robot
{   
    int id;
    char name[50];
};

typedef struct robot Robot;

int main(){
    printf("\n--------------------\n");

    int a = 5;
    char b = '#';
    float c = 5.2;
    int d = 7;

    printf("a: %p\n", &a);
    printf("b: %p\n", &b);
    printf("c: %p\n", &c);
    printf("\n--------------------\n");
    //________________________________________________________________________________

    int* p_a = &a;          //receiving variable address

    printf("element in a:    %d\n", a); //accessing the contents of the variable with another variable that contains the address
    printf("element in *p_a: %d\n", *p_a); //accessing the contents of the variable with another variable that contains the address
    printf("\n");
    
    p_a = &d;               //receiving variable address
    *p_a = 99;              //changing the content of the variable by address
    printf("element in d:    %d\n", d);
    printf("element in *p_a: %d\n", *p_a);
    printf("\n--------------------\n");
    //________________________________________________________________________________

    set_value(&a, 99);      //function changing the content of the variable by address
    set_value(&d, 77);

    printf("a:   %d\n", a);
    printf("d:   %d\n", d);
    printf("\n--------------------\n");
    //________________________________________________________________________________

    test();
    printf("\n--------------------\n");
    //________________________________________________________________________________
    
    //int v[] = {2,3,4,5};
    //print_vector(4, *v);
    //printf("\n--------------------\n");
    //________________________________________________________________________________

    Robot r1 = {1, "HisNameOne"};
    Robot r2 = {2, "HisNameTwe"};
    Robot r3 = {3, "HisNameThree"};
    Robot r4 = {4, "HisNameFour"};

    printf("Name of the first Robot:  %s\n", r1.name);
    printf("Name of the second Robot: %s\n", r2.name);
    printf("Name of the third Robot:  %s\n", r3.name);
    printf("Id of the fourth Robot:   %d\n", r4.id);
    printf("\n--------------------\n");
    //________________________________________________________________________________

    return 0;
}