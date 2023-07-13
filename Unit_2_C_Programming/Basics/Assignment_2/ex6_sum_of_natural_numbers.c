/*
 * Embedded diploma assignment solution for
 * Ex6: Write C Program to calculate the sum of natural numbers
 * #########Console_output######
 * Enter the number of natural numbers: 100
 * Sum: 5050
 * #############################
 * Author: Ibrahim Emad
 * Created: July 13, 2023
 */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, sum = 0;
    printf("Enter the number of natural numbers: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        sum += i;
    }
    printf("Sum: %d\n", sum);
    return 0;
}
