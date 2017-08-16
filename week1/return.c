#include <cs50.h>
#include <stdio.h>

/*This is the function which we created below and we need to call it before we actually use it*/
int square(int n);
/*This is the function which we created below*/

int main(void)
{
    printf("Enter a number: \n");
    int x = get_int();
    printf("The square of the number is %i\n", square(x));
}

int square(int n)
{
    return n * n;

}
