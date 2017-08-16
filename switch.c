#include <cs50.h>
#include <stdio.h>

int main(void)

{
    printf ("Enter y or n\n");
    char c = get_char();
    
    switch(c)
    {
        case 'y':
        case 'Y':
        printf("you selected yes\n");
        break;
        
        case 'n':
        case 'N':
        printf("you selected no\n");
        break;
        
        default:
        printf("error\n");
        break;
        
    }
    
}