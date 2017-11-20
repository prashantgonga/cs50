#include <stdio.h>
#include <cs50.h>
#include <string.h>

//We had earlier created a datatype student in the header file structs.h, which we are calling below
#include "structs.h"

//#define is use to define a constant, a constant needs to be all capital followed by the number of values the constant will hold
#define STUDENTS 3

int main(void)
{

//here student is the datatype, students is the constant we declared above, [STUDENTS] is the value of the student in the array
    student students[STUDENTS];

    for (int i = 0; i < STUDENTS; i++)
    {
       printf("name: ");
       //students[i].name .name is used to point exactly to the name inside the array
       students[i].name = get_string();

       printf("dorm: ");
       students[i].dorm = get_string();
    }

    for (int i = 0; i < STUDENTS; i++)
    {
        printf("%s is in %s \n", students[i].name, students[i].dorm);
    }
}
