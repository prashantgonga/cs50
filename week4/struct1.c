//Extremely similar to struct0.c except this program prints a csv file with the students name and dorm
//Watch 1:40:00 for more information on this program
//https://www.youtube.com/watch?v=PYJYiBlto5M&list=PLhQjrBD2T382VRUw5ZpSxQSFrxMOdFObl&index=6

#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>

#include "structs.h"

#define STUDENTS 3

int main(void)
{
    student students[STUDENTS];

    for (int i = 0; i < STUDENTS; i++)
    {
       printf("name: ");
       students[i].name = get_string();

       printf("dorm: ");
       students[i].dorm = get_string();
    }

    FILE *file = fopen("students.csv","w");

    if (file != NULL)
    {

        for (int i = 0; i < STUDENTS; i++)
        {
            fprintf(file, "%s is in %s \n", students[i].name, students[i].dorm);
        }

        fclose(file);
    }
}
