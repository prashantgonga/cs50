//This program will give a long error because the header file to use get_string() is not added, get_string() is not a part of
//standard installation of c hence we will need to add #include <cs50.h> to use get_string(), <cs50.h> is built by the cs50 team

#include <stdio.h>

int main(void)
{
    string s = get_string();
    printf("Hello %s\n",s);
}
