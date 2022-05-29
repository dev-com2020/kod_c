#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num = 5;
    void *pv = &num;
    printf("%p\n", pv);
    // pv = pv + 1 // warning!

    int vector[] = {28, 41, 7};
    int *pi = vector + 2; // pi: 108
    printf("%d\n", *pi);  // wyświetli 7
    pi--;                 // pi: 104
    printf("%d\n", *pi);  // wyświetli 41
    pi--;                 // pi: 100
    printf("%d\n", *pi);  // wyświetli 28
    return 0;
}

// int vector[] = {28, 41, 7};
// int *p0 = vector;
// int *p1 = vector+1;
// int *p2 = vector+2;
// printf("p2>p0: %d\n",p2>p0); // p2>p0: 1
// printf("p2<p0: %d\n",p2<p0); // p2<p0: 0
// printf("p0>p1: %d\n",p0>p1); // p0>p1: 0
