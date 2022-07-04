#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    for ( i = 1; i <= 5; i++)
    {
        for ( j = 1; j <= 5; j++)
        {
            if (i<=3)
            {
                if (j>=4-i && j<=i+2) printf("*");
                else printf(" ");                
            }
            else
            {
                if (j>=i-2 && j<=8-i) printf("*");
                else printf(" ");
            }
            
        }
    printf("\n");  
    }
getch();  
}