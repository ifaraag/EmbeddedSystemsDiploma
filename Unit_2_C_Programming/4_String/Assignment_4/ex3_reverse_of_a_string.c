/*
 * Embedded diploma assignment solution for
 * Ex3: Find the reverse of a string without using reverse function
 * Author: Ibrahim Emad
 * Created: July 17, 2023
 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str[100], temp;
    int j = 0, i;

    printf("Enter the string: ");
    scanf("%s", str);
    printf("The reverse of the string is: ");

    for (i = strlen(str) - 1; i >= strlen(str) / 2; i--)
    {
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;
        j++;
    }
    printf("%s\n", str);
}