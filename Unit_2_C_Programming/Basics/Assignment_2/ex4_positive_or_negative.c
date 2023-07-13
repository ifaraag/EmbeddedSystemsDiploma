/*
 * Embedded diploma assignment solution for
 * Ex4: Write C Program to check whether a number is positive or negative
 * #########Console_output######
 * Enter a number: 2
 * Number is positive
 * #############################
 * Author: Ibrahim Emad
 * Created: July 13, 2023
 */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    float num;
    printf("This program will check whether a number is positive or negative.\n");
    printf("Enter a number: ");
    scanf("%f", &num);
    if (num > 0)
    {
        printf("The number is positive\n");
    }
    else if (num < 0)
    {
        printf("The number is negative\n");
    }
    else
    {
        printf("The number is zero\n");
    }
}