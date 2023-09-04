#include <stdio.h>


void print_dashed(char s[]){
    for (int i = 0;  s[i]!=0; i++){
        printf("%C - ", s[i]);
    }
    printf("\b   \n");
}

int string_len(char s[]){
    int i;
    for (i = 0;  s[i]; i++){}
    return i;
}

int string_len2(char s[]){
    int i;
    while (s[i]!=0){
        i++;
    }
    return i;
}


int main(){
    char s1[]= "hello!";
    s1 [6]="!";
    char s2[]="world!";
    char s3[]={'o', 't', 0};

    print_dashed(s1);
    print_dashed(s2);
    print_dashed(s3);

    return 0;
}