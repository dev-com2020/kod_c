#include <stdio.h>
#include <stdlib.h>

typedef int (*funcptr)(int);

int square(int num)
{
    return num * num;
}

int main(int argc, char const *argv[])
{

    int n = 5;
    funcptr fptr2;
    fptr2 = square;
    printf("%d po podniesieniu do kwadratu daje %d\n", n, fptr2(n));
    return 0;
}
