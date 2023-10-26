#include <stdio.h>

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
        //int* ad;

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
    
}