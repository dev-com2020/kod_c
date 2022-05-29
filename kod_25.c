#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int vector[5];
    printf("%d\n", sizeof(vector) / sizeof(int));

    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};

    for (int i = 0; i < 2; i++)
    {
        printf("&matrix[%d]: %p sizeof(matrix[%d]): %d\n",
               i, &matrix[i], i, sizeof(matrix[i]));
    }

    int arr3d[3][2][4] = {
        {{1, 2, 3, 4}, {5, 6, 7, 8}},
        {{9, 10, 11, 12}, {13, 14, 15, 16}},
        {{17, 18, 19, 20}, {21, 22, 23, 24}}};

    return 0;
}
