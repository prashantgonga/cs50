#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    //Ask user for input
    string s = get_string();
    //Only enter the next loop if the string is not null
    if (s != NULL)
    {
        for (int i = 0, n = strlen(s); i < n; i++)
        //in the for loop we have assigned the strnlen to n to optimize the code, 
        //to make the code remember the length of the string instead of asking it again and again
        //iterate over the characters in s one at a time
        {
            printf("%c\n", s[i]);
            //Here we are printing the result in an array
        }
    }
}
