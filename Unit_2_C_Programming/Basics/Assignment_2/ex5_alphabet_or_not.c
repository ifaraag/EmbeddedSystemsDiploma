/*
 * Embedded diploma assignment solution for
 * Ex5: Write C Program to check whether a character is an alphabet or not
 * #########Console_output######
 * Enter a character: *
 * * is an alphabet
 * #############################
 */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("%c is an alphabet\n", ch);
    }
    else
    {
        printf("%c is not an alphabet\n", ch);
    }
    return 0;
}