#include<stdio.h>
#include<conio.h>
int main ()
{
    int i, j,k;
    for (i = 1; i <=5 ; i++)
    {
        k = 6-i;
        for (j = 1; j <=5 ; j++)
        {
            if (j>=1 && j<=6-i)
            {
                printf("%d", k--);
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