#include <cs50.h>
#include <stdio.h>
/*
void cough (void);
*/

void cough(int n);

int main(void)
{
  
    cough(3);
}

    void cough(int n)
    {
        for (int i = 0; i < n; i++)
        {
            
        printf("cough\n");
        
            
        }
    }
    
    /* We will get the same output using a for loop below
    printf("cough\n");
    printf("cough\n");
    printf("cough\n");
 */     
 /* We will try to optimize the below code and change the void cough function accordingly
    for (int i = 0; i < 3; i++)
    {
        cough();
    }
    
}
*/ 
/* The function cough doesn't take any input and gives any output hence we have used void both at the start and at the end

void cough (void)
{
    printf("cough\n");
}
*/
