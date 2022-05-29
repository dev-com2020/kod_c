#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char *pc = (char*) malloc(6);
    for (int i = 0; i < 8; i++)
    {
        // *pc[i] = 0; //błąd binarny - zera są wartościami binarnymi a nie ASCII
    }

    char *chunk;
    while (1)
    {
        chunk = (char *)malloc(1000000);
        printf("Alokowanie\n");
    }

    int *pi = (int *)malloc(sizeof(int));
    *pi = 5;
    pi = (int *)malloc(sizeof(int));
    return 0;
}