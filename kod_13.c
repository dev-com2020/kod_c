#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{

    char *string1;
    char *string2;
    string1 = (char *)malloc(16);
    strcpy(string1, "0123456789AB");
    string2 = realloc(string1, 8);
    printf("lancuch string1 wartosc: %p [%s]\n", string1, string1);
    printf("lancuch string2 wartosc: %p [%s]\n", string2, string2);
    return 0;
}