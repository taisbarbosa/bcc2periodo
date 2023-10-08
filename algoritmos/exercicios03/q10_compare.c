#include <stdio.h>

#include <string.h>
int string_compare(char str1[], char str2[]){
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int count=0;
    if(len1==len2){
        count=0;
    }
    if(len1>len2){
        count= count+1;
    }
    if(len1<len2){
        count=count-1;
    }
    return count;
}

int main(){
    char s1[]= "l";
    char s2[]= "lOrem ipSUM";
    printf("\n%d",string_compare(s1,s2));
    char s3[]= "lOrem ipSUM";
    char s4[]= "lOrem ipSUM";
    printf("\n%d",string_compare(s3,s4));
}