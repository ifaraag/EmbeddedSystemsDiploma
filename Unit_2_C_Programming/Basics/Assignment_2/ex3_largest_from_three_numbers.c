/*
 * Embedded diploma assignment solution for
 * EX3: Write C Program to check the largest from three numbers
 * #########Console_output######
 * Enter the first number: 1
 * Enter the second number: 20
 * Enter the third number: 3
 * The largest number is: 20
 * #############################
 * Author: Ibrahim Emad
 * Created: July 13, 2023
 */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    float num1, num2, num3;
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);
    printf("Enter the third number: ");
    scanf("%f", &num3);
    if (num1 >= num2 && num1 >= num3)
    {
        printf("The largest number is: %.2f\n", num1);
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        printf("The largest number is: %.2f\n", num2);
    }
    else
    {
        printf("The largest number is: %.2f\n", num3);
    }
}