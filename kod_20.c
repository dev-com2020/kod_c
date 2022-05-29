#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void saferFree(void **pp)
{
    if (pp != NULL && *pp != NULL)
    {
        free(*pp);
        *pp = NULL;
    }
}

#define safeFree(p) saferFree((void **)&(p))

int main()
{
    int *pi;
    pi = (int *)malloc(sizeof(int));
    *pi = 5;
    printf("Przed: %p\n", pi);
    safeFree(pi);
    printf("Po: %p\n", pi);
    safeFree(pi);
    return (EXIT_SUCCESS);
}