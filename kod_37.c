#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char lastName[8] = "1234567";
    char middleName[8] = "1234567";
    char firstName[8] = "1234567";
    middleName[-2] = 'X';
    middleName[0] = 'X';
    middleName[10] = 'X';
    printf("%p %s\n", firstName, firstName);
    printf("%p %s\n", middleName, middleName);
    printf("%p %s\n", lastName, lastName);
    return 0;
}
