/*
 * Embedded diploma assignment solution for
 * EX1: Write C Program to check whether a number is even or odd
 * #########Console_output######
 * Enter a number: 2
 * Number is even
 * #############################
 * Author: Ibrahim Emad
 * Created: July 13, 2023
 */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num;
    printf("This program will check whether a number is even or odd.\n");
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("The Number is even\n");
    }
    else
    {
        printf("The Number is odd\n");
    }
    return 0;
}
