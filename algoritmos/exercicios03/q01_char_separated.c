#include <stdio.h>
/*
receives a string (as a parameter) 
and prints it to the screen, with each 
character separated by a space
*/
void print_string(char str[]){
    printf("\n");
    int i=0;
    for (i = 0; str[i]!=0; i++)
    {
        if(str[i+1]!=0){
            printf("%c - ", str[i]);
        }else{
            printf("%c", str[i]);
        }
    }
}

int main(){
    char s[]= "caio";
    print_string(s);
}