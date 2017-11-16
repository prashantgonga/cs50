//Swapping of 2 numbers

#include <stdio.h>
#include <cs50.h>

//Calling the swap function at the top before executing any other block of code below
void swap(int *a, int *b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i\n", x);
    printf("y is %i\n", y);
    printf("swapping...\n");
    //swap(&x,&y); fetches the address of both x and y, if we wanted to fetch the value we could have used swap (x,y);
    
    swap(&x,&y);
    printf("swapped...\n");
    printf("x is %i\n", x);
    printf("y is %i\n", y);
}

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
