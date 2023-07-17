/*
 * Embedded diploma assignment solution for
 * Ex1: C Program To Find The Frequency Of Characters.c
 * Author: Ibrahim Emad
 * Created: July 17, 2023
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100], ch;
    int freq = 0;

    printf("Enter the string: ");
    gets(str);
    printf("Enter the character to search: ");
    scanf("%c", &ch);

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == ch)
        {
            freq++;
        }
    }
    printf("The frequency of %c is: %d\n", ch, freq);
}