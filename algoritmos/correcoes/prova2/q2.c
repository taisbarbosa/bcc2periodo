#include <stdio.h>

struct item
{
    int id;
    int quantity;
};
typedef struct item item;



void updt_stock(int n1, item* order, int n2, item* stock){

    item* ord = order;
    for (int i = 0; i < n1; i++)
    {
        item* stk = stock;
        for (int j = 0; j < n2; j++){
            if (ord->id==stk->id)
            {
                stk->quantity-=ord->quantity;
            }
            stk++;
        }
        ord++;
    }
}

int main(){
    int order[][2] = {{1,2},{5,6},{9,10}};
    int stock[][2] = {{1,2},{6,9},{88,70}};
    updt_stock(3, (int*)order, 3, (int*)stock);
}