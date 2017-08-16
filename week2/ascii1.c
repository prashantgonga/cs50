//This program is similar to ascii.c except the for loop is running from A to Z, instead of a number

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    for (char c = 'A'; c <= 'Z'; c++)
    {
        printf("%c is %i\n", c, c);
    }
