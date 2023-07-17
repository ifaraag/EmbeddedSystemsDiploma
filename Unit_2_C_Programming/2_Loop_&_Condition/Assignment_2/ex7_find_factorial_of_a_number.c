/*
 * Embedded diploma assignment solution for
 * Ex7: C Program to find factorial of a number
 * #########Console_output######
 * Enter the number: 10
 * Factorial of 10 is: 362880
 * Enter the number: -5
 * Error!!! Factorial of a negative number doesn't exist
 * #############################
 * Author: Ibrahim Emad
 * Created: July 13, 2023
 */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, fact = 1;
    printf("Enter the number: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Error!!! Factorial of a negative number doesn't exist\n");
    }
    else
    {

        for (int i = 1; i <= num; i++)
        {
            fact *= i;
        }
        printf("Factorial of %d is: %d\n", num, fact);
    }
    return 0;
}
