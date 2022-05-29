#include <stdio.h>
#include <stdlib.h>

    int *f4();
    int (*f5)();
    int *(*f6)();

    int (*fptr1)(int);

    int square(int num)
    {
        return num * num;
    }


int main(int argc, char const *argv[])
{
    int n = 5;
    fptr1 = square;
    printf("%d po podniesieniu do kwadratu daje %d\n", n, fptr1(n));
    return 0;
}