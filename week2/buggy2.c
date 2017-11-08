//This program will print till 11 places for the value of i as because of the incorrect loop for(int i = 0; i <= 10; i++)
//The correct output would be if we tweak the for loop as follows: for(int i = 0; i < 10; i++)

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    for(int i = 0; i <= 10; i++)
    {
        printf("#\n");
        eprintf("The value of 1 is \n &i", i);
    }
}
