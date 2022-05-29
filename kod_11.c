#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

int main(int argc, char const *argv[])
{

    char *name = (char *)malloc(strlen("Zuzia") + 1);
    strcpy(name, "Zuzia");
    while (*name != 0)
    {
        printf("%c", *name);
        name++;
    }
    return 0;
}
