#include <stdio.h>
#include <stdlib.h>
#include <string.h>


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

// q06. starts an matrix with random values.

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

// q07. highest sum row in a matrix.

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

// q08. The last element of each line received the sum.

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

// q09. equality between two matrices.

int check_equals(int rows1, int cols1, int m1[rows1][cols1], int rows2, int cols2, int m2[rows2][cols2]){
    
    int r;
    if (rows1==rows2 && cols1==cols2) 
    {
        r = 1;
    }else{
        r = 0;
    }
    
    if(r!=0){
        for (int i = 0; i < rows1; i++)
        {
            if (r!=0)
            {
                for (int j = 0; j < cols1; j++)
                {
                    if (r!=0)
                    {
                        if (m1[i][j]==m2[i][j])
                        {
                            r = 1;
                        }else{
                            r = 0;
                        }   
                    }
                }  
            }    
        }  
    }
    return r;
}

// q10. performs the addition of two matrices m1 and m2, placing the result in m3.

void sum_matrices(int rows, int cols, int m1[rows][cols], int m2[rows][cols], int m3[rows][cols]){
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            int sum = 0;
            sum= m1[i][j] + m2[i][j];
            m3[i][j]=sum;
        }
    }
}

//q11. assemble and transform the matrix m1 into m2.

void transpose(int r1, int c1, int m1[r1][c1], int r2, int c2, int m2[r2][c2]){
    if(r1==r2 && c1==c2){
        for(int i = 0; i < r1; i++){
            for (int j = 0; j < c1; j++)
            {
                m1[i][j] = m2[i][j];
            }
        }
    }
    if(r1==c2 && c1==r2){
        for(int i = 0; i < r1; i++){
            for (int j = 0; j < c1; j++)
            {
                m1[i][j] = m2[j][i];
            }
        }
    }
}

// q20. counts and returns the number of occurrences of a word in a matrix of n lines of text.

int count_occurrences(int n, int len, char lines[n][len], char word[]){

    int count=0;
    int c=0;

    for (int i = 0; i<n; i++)
    {
        for (int j = 0; j<len; j++)
        {
            if (lines[i][j]== word[0])
            {
                for (int m = 0; m < strlen(word)-1; m++)
                {
                    if (lines[i][j+m]==word[m])
                    {
                        c++;
                    }
                }
            } 
            if (c==strlen(word)-1)
            {
                count++;
            }   
            c=0;
        }
    }  
    return count;
}


// MAIN:

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

    // q09

    int m1[][4]={{10, 20, 30, 40},{10, 20, 30, 40}};
    int m2[][4]={{10, 20, 30, 40},{10, 20, 30, 40}};
    printf("\n%d",check_equals(2, 4, m1, 2,4,m2));
    printf("\n ____ __(end)__ ____ \n");

    // q10

    int matrix1[][4]= {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int matrix2[][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int m3[rows][cols];

    sum_matrices(rows, cols, matrix1, matrix2, m3);
    for (int i = 0; i < rows; i++)
    {
        printf("\n");
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", m3[i][j]);
        }
    }
    printf("\n ____ __(end)__ ____ \n");

    // q11

    int r1 = 3;
    int c1 = 2;
    int r2 = 2;
    int c2 = 3;
    int mat1[3][2];
    int mat2[][3]= {{1,2,3},{6,7,8}};

    if((r1==r2 && c1==c2)||(r1==c2 && c1==r2))
    {
        transpose(r1, c1, mat1, r2, c2, mat2);
        for (int i = 0; i < r1; i++)
        {
            printf("\n");
            for (int j = 0; j < c1; j++)
            {
                printf("%d ", mat1[i][j]);
            }
        }
        printf("\n");
        for (int i = 0; i < r2; i++)
        {
            printf("\n");
            for (int j = 0; j < c2; j++)
            {
                printf("%d ", mat2[i][j]);
            }
        }
    }else{
        printf("\n ERROR: don't have same dimentions!");
    }
    printf("\n ____ __(end)__ ____ \n");

    // q20

    int n = 3;
    int len = 12;
    char lines[3][12] = {"Lorem ipsum", "Lorem ipsum", "Lorem ipsum"};
    char word[6]={"Lorem"};
    int res = count_occurrences(n, len, lines, word);
    printf("\n%s - occurrences: %d", word, res);

    printf("\n ____ __(end)__ ____ \n");
}