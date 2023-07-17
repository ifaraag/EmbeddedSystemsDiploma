/*
 * Embedded diploma assignment solution for
 * Ex2: Write C Program to check vowel or constant
 * #########Console_output######
 * Enter an alphabet: a
 * a is a Vowel
 * #############################
 */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    char ch;
    printf("Enter an alphabet: ");
    scanf("%c", &ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("%c is a Vowel\n", ch);
    }
    else
    {
        printf("%c is a Constant\n", ch);
    }
}