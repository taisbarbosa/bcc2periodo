#include <stdio.h>
#include <string.h>
/*
QUANTITY: letters; digits; symbols.
*/
void string_report(char str[]){
    printf("\n");
    int len = strlen(str);
    int letters=0;
    int digits=0;
    int symbols=0;
    for (int i = 0; i<len; i++)
    {   
        if(str[i] >= ("%d",48) && str[i]<=("%c",57)){
            digits++;
        }else if((str[i] >= ("%c",65) && str[i]<=("%c",90)) || (str[i] >= ("%c",97) && str[i]<=("%c",122)) ){
            letters++;
        }else if ((str[i] >= ("%c",32) && str[i]<=("%c",47)) || (str[i] >= ("%c",58) && str[i]<=("%c",64)) || (str[i] >= ("%c",91) && str[i]<=("%c",96)) || (str[i] >= ("%c",123) && str[i]<=("%c",126))){
            symbols++;
        }
    }
    printf("Quantity:\n");
    printf(">> %d  letter(s)\n", letters);
    printf(">> %d  digit(s)\n", digits);
    printf(">> %d  symbol(s)\n", symbols);
}

int main(){
    char s[]= "IF(meninas){nas exatas}";
    string_report(s);
}