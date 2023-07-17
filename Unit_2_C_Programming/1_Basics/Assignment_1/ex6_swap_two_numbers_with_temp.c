/*
* Embedded diploma assignment solution for
* EX6: Write Source Code to Swap Two Numbers
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
    float a, b, temp;
    printf("Enter value of a: ");
    scanf("%f", &a);
    printf("Enter value of b: ");
    scanf("%f", &b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping, value of a = %.2f\n", a);
    printf("After swapping, value of b = %.2f\n", b);
    return 0;
}
