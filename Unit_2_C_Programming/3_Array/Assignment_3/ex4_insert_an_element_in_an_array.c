/*
 * Embedded diploma assignment solution for
 * Ex4: C Program to insert an element in an array
 * Author: Ibrahim Emad
 * Created: July 17, 2023
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float arr[100] = {99}, value;
    int index, n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%f", &arr[i]);
    }

    printf("Enter the element to be inserted: ");
    scanf("%f", &value);
    printf("Enter the location of the element to be inserted (first location is one): ");
    scanf("%d", &index);

    for (int i = n; i >= index; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[index - 1] = value;

    for (int i = 0; i <= n; i++)
    {
        printf("%.2f ", arr[i]);
    }
    printf("\n");
    return 0;
}