/*
 * Embedded diploma assignment solution for
 * Ex2: C Program to find the length of string without using strlen
 * Author: Ibrahim Emad
 * Created: July 17, 2023
 */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str[100];
    int i = 0;
    printf("Enter the string: ");
    scanf("%s", str);

    // for (i = 0; str[i] != '\0'; i++)
    //     ;

    while (str[i] != '\0')
    {
        i++;
    }

    printf("The length of the string is: %d\n", i);
}