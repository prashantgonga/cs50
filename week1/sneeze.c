#include <cs50.h>
#include <stdio.h>

void cough(int n);
void say(string s, int n);
void sneeze(int n);



int main(void)
{
    cough(3);
    sneeze(3);
}

void cough(int n)
{
    say("cough\n", n);
}

void sneeze(int n)
{
    say("acchoo\n", n);
}

void say(string s, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", s);
    }
}

/*
void cough(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("cough \n");
    }
}
*/

