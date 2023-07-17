/*
 * Embedded diploma assignment solution for
 * Ex5: Search an element in an array
 * Author: Ibrahim Emad
 * Created: July 17, 2023
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float arr[100], value;
    int location = -1, n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%f", &arr[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%f", &value);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == value)
        {
            location = i;
            break;
        }
    }

    if (location != -1)
    {
        printf("Element found at location %d\n", location + 1);
    }
    else
    {
        printf("Element not found\n");
    }
}