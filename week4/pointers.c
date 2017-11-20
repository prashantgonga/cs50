//We are printing an array of any character input by using pointers instead of array

#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    char *s = get_string();
    if(s == NULL)
    {
        return 1;
    }

    for (int i = 0, n = strlen(s); i < n; i++)
    {
    //*(s+i) is same as writing an array s[i], here the counter of i will keep on increasing after each iteration
    //meaning the * is the pointer which will keep pointing to the location of the array until loop exits
        printf("%c\n", *(s+i));
    }
}
