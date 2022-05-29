#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char *name;
    printf("Podaj nazwisko: ");
    scanf("%s", name);

// Funkcja malloc alokuje liczbę bajtów określoną przez swój argument
// Tam, gdzie to możliwe, staraj się stosować operator sizeof do
// określania liczby bajtów do alokacji danych.

    const int NUMBER_OF_DOUBLES = 10;
    // double *pd = (double *)malloc(NUMBER_OF_DOUBLES * sizeof(double));
    double *pd = (double *)malloc(NUMBER_OF_DOUBLES); // tylko 10!

    return 0;
}
