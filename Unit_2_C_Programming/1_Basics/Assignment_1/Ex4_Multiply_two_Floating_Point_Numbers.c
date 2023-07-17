/*
 * Embedded diploma assignment solution for
 * EX4: Write C Program to Multiply two Floating Point Numbers
 * i should see the Console as following:
 * ##############Console-output##################
 * Enter two numbers: 2.4
 * 1.1
 * Product: 2.640000
 * ###############################################
 * Author: Ibrahim Emad
 * Created: July 13, 2023
 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float num1, num2, product;
    printf("This program will multiply two floating point numbers.\n");
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);
    product = num1 * num2;
    printf("The product of %.2f and %.2f is %.2f\n", num1, num2, product);
}