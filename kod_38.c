#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void replace(char buffer[], char replacement, size_t size)
{
    size_t count = 0;
    while (*buffer != NUL && count++ < size)
    {
        *buffer = replacement;
        buffer++;
    }
}
int main(int argc, char const *argv[])
{

    char name[8];
    strcpy(name, "Alexander");
    replace(name, '+', sizeof(name));
    printf("%s\n", name);
    return 0;
}
