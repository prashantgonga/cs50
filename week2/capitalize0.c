//Program to convert lowercase to uppercase
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string s = get_string();
    if (s != NULL)
    {
        for (int i = 0, n = strlen(s); i < n; i++)
        {
            printf("%c\n", toupper(s[i]));
        }
        printf("\n");
    }
    
}
