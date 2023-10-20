#include <stdio.h>

// q01. Write a function that prints the contents of an array.

void print_matrix(int rows, int cols, int m[rows][cols]){
    for (int i = 0; i < rows; i++)
    {
        printf("\n");
        for (int j = 0; j < cols; j++)
        {
            printf("%d  ", m[i][j]);
        }
    }
}

// q02. function that prints the contents of an matrix in reverse...

void print_reversed(int rows, int cols, int m[rows][cols]){

    int a=cols-1;
    int b=rows-1;
    for (int i = b; i >=0; i--)
    {
        printf("\n");
        for (int j = a; j >= 0; j--)
        {
            printf("%d  ", m[i][j]);
        }
    }
}

int main(){

    // q01

    int rows=4;
    int cols=4;
    int m[][4]= {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

    print_matrix(rows, cols, m);

    printf("\n ___ __(end)__ ___ \n");

    // q02
    print_reversed(rows, cols, m);

    printf("\n ___ __(end)__ ___ \n");

}