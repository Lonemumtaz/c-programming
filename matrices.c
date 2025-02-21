// Addition of matices
#include <stdio.h>
int main()
{
    int matrix1[2][3] = {{3, 5, 1}, {2, 1, 3}};
    int matrix2[2][3] = {{1, 4, 2}, {4, 1, 5}};
    int result[2][3];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("Result :\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}