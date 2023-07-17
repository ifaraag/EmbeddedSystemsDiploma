/*
 * Embedded diploma assignment solution for
 * Ex1: Write C Program find the sum of two matrices of size 2x2
 * Author: Ibrahim Emad
 * Created: July 17, 2023
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declare variables for matrices of size 2x2
    float mat1[2][2], mat2[2][2], sum[2][2];

    // Get the values of the matrix 1
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the value of matrix 1[%d][%d]: ", i, j);
            scanf("%f", &mat1[i][j]);
        }
    }

    // Get the values of the matrix 2
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the value of matrix 2[%d][%d]: ", i, j);
            scanf("%f", &mat2[i][j]);
        }
    }

    // Sum of the two matrices
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    printf("The sum of the two matrices is:\n");

    for (int i = 0; i < 2; i++)
    {
        printf("| ");
        for (int j = 0; j < 2; j++)
        {
            printf("%.2f ", sum[i][j]);
        }
        printf("|\n");
    }
    return 0;
}
