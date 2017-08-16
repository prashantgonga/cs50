#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf ("Enter your number\n");
    int i = get_int();
    if (i < 0)
    {
        printf("Number is negative\n");
    }
    else if (i > 0)
    {
        printf("Number is positve\n");
    }
    else 
    {
        printf("Number is zero\n");
    }
}