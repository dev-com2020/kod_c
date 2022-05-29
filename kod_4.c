#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num;
    int *pi = &num;
    printf("wartosc pi: %pi\n", pi);
    void *pv = pi;
    pi = (int *)pv;
    printf("wartosc pi: %pi\n", pi);
    return 0;
}
