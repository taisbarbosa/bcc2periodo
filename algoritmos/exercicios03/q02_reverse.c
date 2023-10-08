#include <stdio.h>
#include <string.h>
/*
PRINT_STRING_REVERSED
*/
void print_string_reversed(char str[]){
    printf("\n");
    int len = strlen(str);
    for (int i = len-1; i>=0; i--)
    {
        printf("%c ", str[i]);
    }
    printf("\n");
}

void reversed_without_strlen(char str[]){
    printf("\n");
    int len = 0;
    for (int i = 0; str[i]!=0; i++)
    {
        len++;
    }
    
    for (int i = len-1; i>=0; i--)
    {
        printf("%c ", str[i]);
    }
    printf("\n");
}

int main(){
    char s[]= "caio";
    printf("\nWITH STRLEN: ");
    print_string_reversed(s);
    printf("\nWITHOUT STRLEN: ");
    reversed_without_strlen(s);
    printf("\n");
}