#include <stdio.h>

void read_file_char(const char* file_path) {
    FILE* file;
    file = fopen(file_path,"r+"); // read
    if (file == NULL) {
        printf("ERROR: impossible to open the file.\n");
        return;
    }

    //printf("cursor: %ld\n", ftell(file));
    //fseek(file, 0, SEEK_END);
    //printf("cursor: %ld\n", ftell(file));

    //fputs("Text of teste of string");
    //fseek(file, 0, SEEK_END);

    char buffer[10]; // to read nine at a time

    while (fgets(buffer, 10, file)!=NULL){
        printf("[%s]", buffer);
    }
    fclose(file);
}
//____main_____________________________________
int main(){
    read_file_char("file.txt");
}