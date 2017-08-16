#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Enter y or n \n");
    char c = get_char();
    if (c == 'y' || c == 'Y')
    {
        printf ("yes\n");
    }
    
    else if (c == 'n' || c == 'N')
    {
        printf ("no\n");
    }
    else
    {
        printf("error\n");
    }
}