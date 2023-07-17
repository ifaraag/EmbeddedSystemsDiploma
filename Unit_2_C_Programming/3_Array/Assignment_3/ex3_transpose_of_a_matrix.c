/*
 * Embedded diploma assignment solution for
 * Ex3: Print the transpose of a matrix
 * Author: Ibrahim Emad
 * Created: July 17, 2023
 */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    float mat[100][100], trans[100][100];
    int rows, columns;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("Enter the value of matrix[%d][%d]: ", i, j);
            scanf("%f", &mat[i][j]);
        }
    }

    printf("Entered matrix is:\n");

    for (int i = 0; i < rows; i++)
    {
        printf("| ");
        for (int j = 0; j < columns; j++)
        {
            printf("%.2f ", mat[i][j]);
        }
        printf("|\n");
    }

    printf("Transpose of the matrix is:\n");

    for (int i = 0; i < columns; i++)
    {
        printf("| ");
        for (int j = 0; j < rows; j++)
        {
            trans[i][j] = mat[j][i];

            printf("%.2f ", trans[i][j]);
        }
        printf("|\n");
    }
}