#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    printf("%d\n", sizeof(char));
    printf("%d\n", sizeof('a'));

    char header[32];
    char *header;
    return 0;
}
