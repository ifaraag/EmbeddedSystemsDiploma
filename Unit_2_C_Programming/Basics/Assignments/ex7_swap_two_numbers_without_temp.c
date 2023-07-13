/*
* Embedded diploma assignment solution for
* EX7: Write Source Code to Swap Two Number without temp variable
* #########Console_output######
* Enter value of a: 1.20
* Enter value of b: 2.45
* After swapping, value of a = 2.45
* After swapping, value of b = 1.2
#############################
* Author: Ibrahim Emad
* Created: July 13, 2023

*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    float a, b;

    printf("Enter value of a: ");
    scanf("%f", &a);
    printf("Enter value of b: ");
    scanf("%f", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping, value of a = %.2f\n", a);
    printf("After swapping, value of b = %.2f\n", b);
    return 0;
}
