#include <stdio.h>

struct student
{
    char item_name[25];
    int quantity;
    float price;
};

int main()
{
    
    struct student item = {"Soap", 4, 125.50};
    struct student *ptr;
    ptr = &item;
    printf("Item Name: %s\nItem Quantity: %d\nItem Price: %f\n", (*ptr).item_name, (*ptr).quantity, (*ptr).price);
    return 0;
}