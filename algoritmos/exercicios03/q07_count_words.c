#include <stdio.h>

#include <string.h>
int count_words(char str[]){
    printf("\n");
    int len = strlen(str);
    int count = 0;
    for (int i = 0; i<len; i++)
    {   
        if(str[i] == ("%c",32)){
            count++;
        }
        if(str[i+1] == '\0'){
            count++;
        }
    }
    return count;
}

int main(){
    char s[]= "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.";
    int q = count_words(s);
    printf("Quantity of words: %d", q);
}