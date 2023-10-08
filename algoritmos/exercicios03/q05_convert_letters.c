#include <stdio.h>

//convert to capital letters

#include <string.h>
void string_to_upper(char str[]){
    printf("\n");
    int len = strlen(str);
    for (int i = 0; i<len; i++)
    {   
        if(str[i] >= ("%c",97) && str[i]<=("%c",122)){
            for (int j = 97; j < 123; j++)
            {
                if(str[i]==("%c", j)){
                    str[i] = ("%c", j-32);
                }
            }
        }
    }
}

int main(){
    char s[]= "IF(meninas){nas exatas}";
    string_to_upper(s);
    printf("%s", s);
}