#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num = 5;
    int *pi = &num;
    printf("%p\n", *pi); // 5
    *pi = 200;
    printf("%d\n", num); // 200

    void (*foo)();

#define NULL ((void *)0)

    pi = NULL;
    pi = 0;
    pi = 100; // błąd
    pi = num; // błąd
    return 0;
}