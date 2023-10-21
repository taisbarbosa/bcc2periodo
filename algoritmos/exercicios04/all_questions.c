#include <stdio.h>
#include <stdlib.h>


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

// q03. function that finds and prints the largest and smallest values ​​contained in an matrix.

void print_min_max(int rows, int cols, int m[rows][cols]){

    int max = m[0][0];
    int min = m[0][0];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++){   
            if (m[i][j]>max)
            {
            max = m[i][j];
            }
            if (m[i][j]<min)
            {
            min = m[i][j];
            }
        }
    }
    printf("\nThe largest number is %d", max);
    printf("\nThe smallest number is %d", min);
}

// q04. function that returns the simple arithmetic average of all elements in the matrix.

float return_average(int rows, int cols, int m[rows][cols]){

    int control = rows*cols;
    int sum = 0;
    float average;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++){   
            sum = sum+m[i][j];
        }
    }
    average = (float)sum/(float)control;

    return average;
}
// q05. starting from the informed start and progressing with informed steps.

void init_values(int rows, int cols, int m[rows][cols], int start, int step){

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            m[i][j] = start;
            start = start + step;
        }
    }
}

// q06. starts an matrix with random values

void init_random(int rows, int cols, int m[rows][cols], int min, int max){
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {   
            int r = (rand() % max);
            if (r < min){
                m[i][j] = min + r;
            }else{
                m[i][j] = r;
            }
        }
    }
}

// q07. highest sum row in a matrix

int return_max_line(int rows, int cols, int m[rows][cols]){
    
    int max_sum = 0;
    int sum = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {   
            sum = sum + m[i][j];
        }
        if (sum > max_sum){
            max_sum = sum;
        }
        sum=0;
    }
    return max_sum;
}

// q08. The last element of each line received the sum

void put_totals(int rows, int cols, int m[rows][cols]){
    
    int sum;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (j<cols-1){
                sum = sum + m[i][j];
            }
            if (j==cols-1){
                m[i][j]=sum;
            }
        }
        sum = 0;
    }
}

// q09. equality between two matrices

int check_equals(int rows1, int cols1, int m1[rows1][cols1], int rows2, int cols2, int m2[rows2][cols2]){
    
    if (rows1==rows2 && cols1==cols2){
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
            }
        }
    }
    
}

int main(){

    // q01

    int rows=4;
    int cols=4;
    int m[][4]= {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

    print_matrix(rows, cols, m);
    printf("\n ____ __(end)__ ____ \n");

    // q02

    print_reversed(rows, cols, m);
    printf("\n ____ __(end)__ ____ \n");

    // q03

    int mi[][4]= {{9,10,11,4},{5,6,7,8},{1,2,3,13},{1,88,29,11}};
    print_min_max(rows, cols, mi);
    printf("\n ____ __(end)__ ____ \n");

    // q04

    printf("\nAverage of elements in the matrix: %.3f", return_average(rows, cols, m));
    printf("\n ____ __(end)__ ____ \n");

    // q05

    int mii[rows][cols];
    int start = 10;
    int step = 2;
    init_values(rows, cols, mii, start, step);
    for (int i = 0; i < rows; i++)
    {
        printf("\n");
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", mii[i][j]);
        }
    }
    printf("\n ____ __(end)__ ____ \n");

    // q06

    int max = 500;
    int min = 250;
    init_random(rows, cols, mii, min, max);
    for (int i = 0; i < rows; i++)
    {
        printf("\n");
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", mii[i][j]);
        }
    }
    printf("\n ____ __(end)__ ____ \n");

    // q07

    printf("\n%d",return_max_line(rows, cols, mi));
    printf("\n ____ __(end)__ ____ \n");

    // q08

    put_totals(rows, cols, m);
    for (int i = 0; i < rows; i++)
    {
        printf("\n");
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", m[i][j]);
        }
    }
    printf("\n ____ __(end)__ ____ \n");
}