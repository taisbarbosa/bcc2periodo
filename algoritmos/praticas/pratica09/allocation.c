#include <stdio.h>
#include <stdlib.h>

//__section___________________________________________
void functionB() {
    int b = 7;
    int v[] = {3,6,9};
}

void functionA() {
    int a = 76;
    int v[] = {2,4,6};
    functionB();
}
//__/section__________________________________________

//__section___________________________________________
void functionC() {
    static int c = 0;
    printf("content of c: %d\n", c);
    c++;
}
//__/section__________________________________________

//__section___________________________________________
int find(int n, int* vI, int element) {
    static int last_idx= -1;
    for (int i = 0; i < n; i++)
    {
        if (vI[i]==element)
        {
            last_idx = i;
            return last_idx;
        }
        
    }
    last_idx = -1;
    return last_idx;
}
//__/section__________________________________________

//__section___________________________________________
int functionD() {
    for (int i = 0; i < 50; i++)
    {
        int* vII = malloc(100*sizeof(int));
        
        free(vII);
    }
}
//__/section__________________________________________

//__section___________________________________________
int main() {

    int a = 5;
    int v[] = {1,2,3,4};
    functionA();
    //________________________________________________

    functionC();
    functionC();
    functionC();
    functionC();
    //________________________________________________

    int n = 7;
    int vI[] = {3,5,6,1,2,10,77};
    int element = 2;
    printf("\n");
    printf("Position: %d\n", find(n, (int*)vI, element));
    printf("Position: %d\n", find(n, (int*)vI, element));
    printf("Position: %d\n", find(n, (int*)vI, element));
    //________________________________________________

    functionD();
    printf("\n");
    printf("Bye!\n");
    //________________________________________________

    return 0;
}
//__/section__________________________________________

