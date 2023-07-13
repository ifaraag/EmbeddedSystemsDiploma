/*
 * Embedded diploma assignment solution for
 * EX3: Write C Program to Add Two Integers
 * i should see the Console as following:
 * #########Console-output##############
 * Enter two integers: 12
 * 11
 * Sum: 23
 * #####################################
 */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num1, num2, sum;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    printf("Sum: %d\n", sum);
    return 0;
}
