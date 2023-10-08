#include <stdio.h>


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

int strcmp_plus(char s1[], char s2[]){
    printf("\n");
    string_to_upper(s1);
    string_to_upper(s2);
    int res = strcmp(s1,s2);

    if (res<0){
        printf("%s < %s", s1, s2);
    }
    if (res>0){
        printf("%s > %s", s1, s2);
    }
    if (res==0){
        printf("%s = %s", s1, s2);
    }
}

int main(){
    char s1[]= "IF(meninas){nas exatas}";
    char s2[]= "IF(meninas){nas exatas}";
    strcmp_plus(s1, s2);
    char s3[]= "IF(meninas)";
    char s4[]= "IF(meninas){nas exatas}";
    strcmp_plus(s3, s4);
    char s5[]= "IF(meninas){nas exatas}";
    char s6[]= "IF(meninas)";
    strcmp_plus(s5, s6);
}