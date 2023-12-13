#include <stdio.h>
#include <stdlib.h>

typedef struct {
    long id;
    char name[51];
} Movie;

// q01. writes the contents of a vector of integers to a file
void write_array(char* path, int n, int* v){
    FILE* file = fopen( path, "wb");
    if(file==0){
        printf("ERROR: file not found!");
    }
    fwrite(v, sizeof(v), 10, file);

    fclose(file);

    // test
    FILE* file1 = fopen( path, "rb");

    int vec[n];
    fread(vec, sizeof(vec), 1, file1);
    printf("\n\nQuestion 01\nChecking the content in vector - ");
    for(int i =0; i<n; i++){
        printf("%d ", vec[i]);
    }

    fclose(file1);
}

// q02. reads the contents of a file into a vector of integers, (heap).return the address of the vector allocated on the heap. The size of the vector must bereturned by the function through the parameter 'n'.
int* read_array(const char* filepath, int* n){
    
    FILE* file1 = fopen( filepath, "r+");
    if(file1 == NULL){
        return NULL;
    }
    fseek(file1, 0, SEEK_END);

    int position = ftell(file1);

    *n = position/sizeof(int);
    rewind(file1);

    printf("\nQuestion 02\nArray size in file - %d  ", position);
    int *vec = malloc(*n * sizeof(int));

    fread(vec, sizeof(vec), *n, file1);

    fclose(file1);
    printf("\nChecking the content in vector - ");
    for (int i = 0; i <*n; i++)
    {
        printf("%d ", *vec);
        vec = vec+1;
    }
    printf("\nAddress inside the function - %p ", vec);
    return vec;
}

// q03. writes the content of a movie(struct) vector to a file
void write_all_movies(const char* filepath, int n, const Movie* v){
    FILE* file = fopen(filepath, "w+");
    if(file==NULL){
        printf("\nERROR: it was not possible!\n");
    }
    fwrite(v, sizeof(Movie), n, file);
    fclose(file);
}

// q04. returns the number of movie(struct) records contained in a file.
int count_movies(const char* filepath){
    FILE* file = fopen(filepath, "rb");
    fseek(file, 0, SEEK_END);
    int position = ftell(file);
    fclose(file);
    int quantity = position/sizeof(Movie);
    return quantity;
}

// q05.
Movie read_movie(const char* filepath, int pos){
    FILE* file = fopen(filepath, "rb");
    int q = count_movies(filepath);
    if (pos>=q){
        Movie zero = {0, "0"};
        return zero;
    }else{
        Movie vec[q];
        fread(vec, sizeof(Movie), q, file);
        Movie res = vec[pos];
        return res;
    }
}

// main
int main(){
    // q01
    int v[] = {1,2,3,4,5,6,7,8,9,10};
    write_array("./files/datas.bin", 10, (int*)v);
    //________________________________________________________

    // q02
    int n;
    int *v2 = read_array("./files/datas.bin", &n);
    printf("\nAddress - %p", v2);
    printf("\nSize - %d\n", n);
    
    free(v2);
    //________________________________________________________

    // q03

    int size_movies=5;
    Movie movies[] = {{1,"They Live"}, {2, "Big Trouble"}, {3, "Estrelas Alem do T"}, {4, "Barbie"}, {5, "Karate"}};
    write_all_movies("./files/movies.bin", size_movies, (Movie*)movies);

    //test
    printf("\nQuestion 03");
    Movie vec_test[size_movies];
    FILE* file = fopen("./files/movies.bin", "r+");
    if(file==NULL){
        printf("\nERROR: it was not possible!\n");
    }
    fread(vec_test, sizeof(Movie), size_movies, file);
    fclose(file);
    for (int i = 0; i < size_movies; i++)
    {
        printf("\nId: %lo", vec_test[i].id);
        printf("   ");
        printf("Title: %s", vec_test[i].name);
    }
    //________________________________________________________

    // q04
 
    printf("\nQuestion 04\nThe number of movies - %d", count_movies("./files/movies.bin"));
    //________________________________________________________

    // q05
    Movie pos = read_movie("./files/movies.bin", 4);
    printf("\nQuestion 05 \nId: %lo   Title: %s", pos.id, pos.name);
    //________________________________________________________
}