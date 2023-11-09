#include <stdio.h>
#include <string.h>

// q01. declare three variables (char, int and double) and print their Adresses.

// q02. add values ​​contained in two variables through their addresses, placing the result in the first.

void add(int* a, int* b){
    
    int sum = *a + *b;
    *a = sum;
}

// q03. takes the length and address of a vector and prints its content, without using the index operator.

void print_vector(int n, const int* vect){
    for (int i = 0; i < n; i++)
    {
        printf("\ncontent %d of the vector: %d", i, *(vect+i));
    }
}

// q04. prints the contents of a vector in reverse order.

void print_vector_reverse(int n, const int* vect){
    for (int i = n; i >0; i--)
    {
        printf("\ncontent %d of the vector: %d", i-1, *(vect+i-1));
    }
}

// q05. The function should return, through the min and max parameters, the largest and smallest value contained in the vector. You should not use the index operator.

void get_min_max(int n, const int* vect, int* min, int* max){

    for (int i = 1; i< n; i++)
    {
        if (*(vect+i)>*max)
        {
            *max = *(vect+i);
        }
        if (*(vect+i)<*min)
        {
            *min = *(vect+i);
        }
    }
}

// q06. receives the dimensions and address of an matrix. The function must print its content.

void print_vector2D(int rows, int cols, const int* m){
    int *p = m;
    for (int i = 0; i < rows; i++){
        for (int j =0; j < cols; j++)
        {
            printf("%2d ", *p);
            p++;
        }
    printf("\n");
    }
}

// q07. The function must concatenate, at the end of the original string, a vertical bar, followed by the contents of the string in reverse

void make_mirrored(char* string){
    int a = strlen(string)*2+2;
    int b = 0;
    int len = strlen(string);
    char *copy = string;
    
    printf("%s|", copy);
    while (b!=a)
    {
        printf("%c",*(copy+len));
        a--;
        b++;
        len--;
    }
}

// q08. receives the address of two strings and calculates the Hamming distance between both

void get_hamming_distance(const char* str1, const char* str2){
    int d = 0;
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1!=len2){
        printf("LENGTH ERROR!");
    }else{
        for (int i = 0; i < len1; i++)
        {
            if(*str1!=*str2){
                d++;
            }
            str1++;
            str2++;
        }
        
    }
    printf("%d", d);
}

// q09. return the address of the most similar "string"

char* find_most_similar(const char* str, int n, char list[n][50]){
    int distance1 = 0;
    char *s;
    char *p = *list;
    char *res;

    for (int i = 0; i < n-1; i++)
    {  
    
        int len1 = strlen(str);
        int len2 = strlen(p[i]);
        printf("%d\n", len1);
        printf("%d\n", len2);


        if (len1!=len2){
            printf("LENGTH ERROR!");
        }else{
            int distance_max = len1;

            for (int j = 0; j < len1; j++)
            {
                if(*str!=p[i]){
                    distance1++;
                }
                str++;
            }
            if (distance1<distance_max)
            {
                res = p[i];
                distance_max = distance1;
                distance1=0;
            }
        }
    }
    return res;
}


//MAIN

int main(){

    //q01

    int a = 5;
    char b = 'a';
    float c = 1.5;

    printf("%p | %d\n", &a, a);
    printf("%p | %c\n", &b, b);
    printf("%p | %f\n", &c, c);

    printf("\n\n_______  _(end)_  _______\n\n");

    // q02

    int d = 44;

    add(&a, &d);
    printf("\n%d", a);

    printf("\n\n_______  _(end)_  _______\n\n");

    // q03

    int len_vect = 5;
    int vect[] = {23, -1, 4, 99, 50};
    print_vector(len_vect, (int*)vect);

    printf("\n\n_______  _(end)_  _______\n\n");

    // q04

    print_vector_reverse(len_vect, (int*)vect);

    printf("\n\n_______  _(end)_  _______\n\n");

    // q05

    int min = *vect;
    int max = *vect;

    get_min_max(len_vect, (int*)vect, &min, &max);

    printf("\nsmaller - %d\nlarger - %d", min, max);

    printf("\n\n_______  _(end)_  _______\n\n");

    // q06

    int rows = 3; 
    int cols = 3;
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    print_vector2D(rows, cols, (int*)matrix);

    printf("\n\n_______  _(end)_  _______\n\n");

    // q07

    char string[] = "Lorem";
    make_mirrored((char*)string);
    
    printf("\n\n_______  _(end)_  _______\n\n");

    //q08 

    char s1[] = "banana";
    char s2[] = "cabana";
    get_hamming_distance((char*) s1, (char*) s2);   

    printf("\n\n_______  _(end)_  _______\n\n");

    // q09

    char str[]="banana";
    char words[][50] = {"cabana", "savana", "bacana", "halana"};
    char* most_similar = find_most_similar((char*)str, 4, words);
    printf("%p  %s", &most_similar, most_similar); 

    printf("\n\n_______  _(end)_  _______\n\n");
}