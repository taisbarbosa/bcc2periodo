#include <stdio.h>

int main(){
    FILE* file = fopen("data.txt", "r");
    if (file==0){
        printf("ERROR: file not found!");

        //Writing. Truncates to zero OR creates it if it does not exist. Cursor at the beginning.
        file = fopen("data.txt", "w");
        if (file!=0){
            printf("\nFile created!");
        }else{
            printf("\nNot's possible to create the file");
        }
    }else{
        printf("\nSuccess");
    }
    FILE* file02 = fopen("./data_dir/data.txt", "r");
    if (file02==0){
        printf("\nERROR: file not found!");
    }else{
        printf("\nSuccess");
    }

    // READ CHAR-TO-CHAR 
    char ch = fgetc(file);
    printf("\n");
    while ( ch != EOF) {
        printf("%c", ch);
        ch = fgetc(file);
    }

    //  TEXTO    BIN 
    //  get...   read..
    //  put...   write.

    // WRITE CHAR-TO-CHAR 
    FILE* file03 = fopen("my_file.txt","w"); // write + truncate/create

    char text[] = "\ntext test 1.\ntext test 2.\n";
    for (int i = 0; text[i] != '\0'; i++) {
        fputc(text[i], file03);
    }
    fclose(file03);

    file03 = fopen("my_file.txt", "r");
    ch = fgetc(file03);
    printf("\n");
    while ( ch != EOF) {
        printf("%c", ch);
        ch = fgetc(file03);
    }

    fclose(file);
    fclose(file02);
    fclose(file03);
    return 0;
}