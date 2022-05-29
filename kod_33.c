#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 char *staticFormat(const char *name, size_t quantity, size_t weight)
    {
        static char buffer[64]; // zakładamy, że bufor jest wystarczająco duży
        sprintf(buffer, "Element: %s Ilość: %u Waga: %u",
                name, quantity, weight);
        return buffer;
    }

int main(int argc, char const *argv[])
{
    char *part1 = staticFormat("Oś", 25, 45);
    char *part2 = staticFormat("Tłok", 55, 5);
    printf("%s\n", part1);
    printf("%s\n", part2);
    return 0;
}