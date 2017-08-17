//This programs prints takes the input from the console directly from int main and prints the first string entered by the user after running the program

#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        printf("hello, %s\n", argv[1] );
    }
    else
    {
        printf("hello world\n");
    }
}
