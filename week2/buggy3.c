//This program has a logical bug, if the user will input 0 as a negative integer, the program would accept the value and exit the loop

#include <cs50.h>
#include <stdio.h>

int get_negative_int(void);

int main(void)
{
    int i = get_negative_int();
    printf("%i is a negative integer\n", i);
}


//The above stated bug is in the below function, to fix the bug you will need to change the while loop from  while (n > 0); to
// while (n >= 0);

int get_negative_int(void)
{
    int n;
    do
    {
        printf("n is a positive integer, please enter a negative integer: ");
        n = get_int();
    }
    while (n > 0);
    return n;
}
