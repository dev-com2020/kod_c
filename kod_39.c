#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _item
{
    int partNumber;
    int quantity;
    int binNumber;
} Item;
int main(int argc, char const *argv[])
{
    Item part = {12345, 35, 107};
    int *pi = &part.partNumber;
    printf("Numer części: %d\n", *pi);
    pi = &part.quantity;
    printf("Ilość: %d\n", *pi);
    pi = &part.binNumber;
    printf("Numer skrzyni: %d\n", *pi);
    return 0;
}
