#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Enter your name: ");    
    string s = get_string();
    printf("hello, %s\n", s);

}
