#include <stdio.h>

/*
PRINT_STRING_REVERSED
*/
void print_hyphenated(char str[], char separator){
    printf("\n");
    for (int i = 0; str[i]!=0; i++)
    {   
        if(str[i+1]!=0){
            printf("%c%c", str[i], separator);
        }else{
            printf("%c", str[i]);
        }
    }
}

int main(){
    char s[]= "technology";
    char separator = 'X';
    print_hyphenated(s, separator);
}