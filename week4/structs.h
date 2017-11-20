//This is a header file structs.h in which we have created a datatype named student (just like char, int, float etc.)

#include <cs50.h>

//typedef struct is used to initialize the structure (datatype student) which will contain name and dorm name of the student
typedef struct
{
    string name;
    string dorm;
}
student;
