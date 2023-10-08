#include <stdio.h>

#include <string.h>
void string_capitalize(char str[]){
    int len = strlen(str);
    int count = 0;
    for (int i = 0; i<len; i++)
    {   
        if(str[i-1]==("%c",32) || i ==0){
            if(str[i] >= ("%c",97) && str[i] <= ("%c",122)){
                for (int j = 97; j < 123; j++)
                {
                    if(str[i]==("%c", j)){
                        str[i] = ("%c", j-32);
                    }
                }
            }
        }else{
            if(str[i] >= ("%c",65) && str[i] <= ("%c",90)){
                for (int j = 65; j < 90; j++)
                {
                    if(str[i]==("%c", j)){
                        str[i] = ("%c", j+32);
                    }
                }
            }
        }
    }
}

int main(){
    char s[]= "lOrem ipSUM";
    printf("\n%s\n", s);

    string_capitalize(s);
    printf("\n%s\n", s);
}