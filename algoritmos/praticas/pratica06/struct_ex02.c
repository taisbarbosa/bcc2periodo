#include <stdio.h>
#include <string.h>

#define MAX_STR 100



struct address{
    int number;
    char street[MAX_STR];
    char zip_code[MAX_STR];
    
};

struct contato
{
    int id;
    char name[MAX_STR];
    struct address address;

};


//typedef actual-type  new-name
typedef struct contato Contato;


int teste(int a,int v[]){
    struct contato c= {1, "Marry", {232, "Av. Brasil", "77777"}};
    printf("\nPerson: %d %s \nAddress: %d  %s %s\n",c.id, c.name, c.address.number, c.address.street, c.address.zip_code);
}

int main(){
    int v[5]={1,2,3,4,5};
    teste(5, v);
}