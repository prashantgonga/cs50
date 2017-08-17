//This program detects if any value is being provided in the command line argument and will return the first string (it counts from zero)
#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Missing command line argument\n");
        return 1;
    }
        printf("hello, %s\n", argv[1]);
        return 0;
}
