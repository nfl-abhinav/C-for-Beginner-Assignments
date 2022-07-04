#include<stdio.h>
#include<conio.h>
int main ()
{
    int i,j;
    char k = 'A';
    for (i = 1; i <=4; i++)
    {
        char k = 'A';
        for (j=1; j<=4; j++)
        {
            if (j>=1 && j<=5-i)
            {
                printf("%c", k++);
            }
            else
            {
                printf(" ");
            }
            
        }
    printf("\n");
    }
getch(); 
}
