#include <stdio.h>

int main()
{
    int rows = 3, cols = 3;
    int matrix[3][3];
    int i, j;

    printf("Enter elements for a 3x3 matrix:\n");

    // Taking input for 2D array
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe 2D array (matrix) you entered is:\n");

    // Displaying 2D array in matrix format
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

        return 0;
}