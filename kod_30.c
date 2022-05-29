#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strcmp(const char *s1, const char *s2);

int main(int argc, char const *argv[])
{

    char command[16];
    printf("Wpisz polecenie: ");
    scanf("%s", command);
    if (strcmp(command, "koniec") == 0)
    {
        printf("Wprowadzono polecenie koniec");
    }
    else
    {
        printf("Niewprowadzono polecenia koniec");
    }

    return 0;
}