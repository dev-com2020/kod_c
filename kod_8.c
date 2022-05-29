#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num = 5;
    const int limit = 500;
    int *pi;        // wskaźnik do liczby całkowitej
    const int *pci; // wskaźnik na stałą typu integer
    pi = &num;
    pci = &limit;
    printf(" num - Adres: %p wartosc: %d\n", &num, num);
    printf("limit - Adres: %p wartosc: %d\n", &limit, limit);
    printf(" pi - Adres: %p wartosc: %p\n", &pi, pi);
    printf(" pci - Adres: %p wartosc: %p\n", &pci, pci);
    return 0;
}
