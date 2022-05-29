#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char *titles[] = {"Opowieść o dwóch miastach",
                      "Komu bije dzwon", "Don Kichot",
                      "Odyseja", "Moby Dick", "Hamlet",
                      "Podróże Guliwera"};
    char **bestBooks[3];
    char **englishBooks[4];
 
    bestBooks[0] = &titles[0];
    bestBooks[1] = &titles[3];
    bestBooks[2] = &titles[5];
    englishBooks[0] = &titles[0];
    englishBooks[1] = &titles[1];
    englishBooks[2] = &titles[5];
    englishBooks[3] = &titles[6];
    printf("%s\n", *englishBooks[1]); // Komu bije dzwon
    return 0;
}
