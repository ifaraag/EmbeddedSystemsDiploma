/*
 * Embedded diploma assignment solution for
 * Ex2 :C Program to calculate average of array
 * Author: Ibrahim Emad
 * Created: July 17, 2023
 */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    float arr[100], ave, sum = 0;
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%f", &arr[i]);
        sum += arr[i];
    }
    ave = sum / n;
    printf("The average of the array is: %.2f\n", ave);
    return 0;
}