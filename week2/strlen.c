//This program counts the number in a string and outputs the result without using any other library eg: <string.h>
#include <cs50.h>
#include <stdio.h>


int main(void)
{
    string s = get_string();
    int n = 0;
    while (s[n] != '\0')
    {
        n++;
    }
    printf("%i\n",n);
}
