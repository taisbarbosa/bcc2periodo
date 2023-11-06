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
            
        }
    }
}