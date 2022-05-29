#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char name[32];
    char *names[30];
    size_t count = 0;
    printf("Podaj imie: ");
    scanf("%s", name);
    names[count] = (char *)malloc(strlen(name) + 1);
    strcpy(names[count], name);
    count++;
    return 0;
}
