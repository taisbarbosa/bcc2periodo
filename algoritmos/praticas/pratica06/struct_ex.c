#include <stdio.h>

struct contato
{
    int id;
    char name[50];
};

int teste(){
    int a = 5;
    int v[5]= {1,2,3,4,5};
    struct contato c= {1, "Marry"};
    printf("\n%s\n",c.name);
}

int main(){
    teste();
}