/*
 * Embedded diploma assignment solution for
 * EX5: Write C Program to Find ASCII Value of a Character
 * #########Console_output######
 * Enter a character: G
 * ASCII value of G = 71
 * #############################
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("ASCII value of %c = %d\n", ch, ch);
}