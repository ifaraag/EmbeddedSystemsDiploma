/*
 * Embedded diploma assignment solution for
 * Ex8: C Program to make a simple calculator using switch...case
 * Author: Ibrahim Emad
 * Created: July 13, 2023
 */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    float num1, num2, result;
    char operator;

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the operator: ");
    scanf(" %c", &operator);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 == 0)
        {
            printf("Error!!! Division by zero \n");
        }
        else
        {
            result = num1 / num2;
        }
        break;
    default:
        printf("Invalid operator");
    }
    printf("The result is: %.2f\n", result);
    return 0;
}