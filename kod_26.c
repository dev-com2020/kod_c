#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int matrix[2][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("macierz[%d][%d] Adres: %p Wartosc: %d\n",
                   i, j, &matrix[i][j], matrix[i][j]);
        }
    }

    int(*pmatrix)[5] = matrix;
    printf("%p\n", matrix);            // 100
    printf("%p\n", matrix + 1);        // 200
    printf("%d\n", sizeof(matrix[0])); // 20
    printf("%p %d\n", matrix[0] + 1, *(matrix[0] + 1));

    return 0;
}