#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // int num;
    // int *const cpi = &num;
    // *cpi = limit;
    // *cpi = 25;
    // const int limit = 500;
    // int *const cpi = &limit; // bład

    // int num;
    // int age;
    // int *const cpi = &num;
    // cpi = &age; // bląd
    // return 0;

    //     const int * const cpci = &limit;
    // int num;
    // const int * const cpci = &num;
    // cpci = &num; // błąd
    // *cpci = 25; //błąd

    // const int * const cpci = &limit;
    // const int * const * pcpci;
    // printf("%d\n",*cpci);
    // pcpci = &cpci;
    // printf("%d\n",**pcpci);

    int *pi = (int *)malloc(sizeof(int));
    *pi = 5;
    printf("*pi: %d\n", *pi);
    free(pi);

    // int *pi = (int *) malloc(4);

    // int *pi;
    // *pi = (int *)malloc(sizeof(int)); //źle
    pi = (int *)malloc(sizeof(int));  // dobrze
}
