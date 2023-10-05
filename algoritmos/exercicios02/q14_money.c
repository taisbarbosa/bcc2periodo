#include <stdio.h>

//counting of bills

void min_bills(int value, int n, int bills[]){

    int count=0;
    printf("\nquantity / bill:\n");
    while (value>0)
    {
        for (int i = n-1; i >=0; i--)
        {
            count = value/bills[i];
            if(count>0){
                printf("%d x %d\n", count, bills[i]);
            }
            value=value-(bills[i]*count);
            count=0;
        }
    }
}

int main(){
    int value=40;
    int n= 7;
    int bills[7]= {2,5,10,20,50,100,200};

    min_bills(value,n,bills);
}