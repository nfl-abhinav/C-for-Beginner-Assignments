#include<stdio.h>
#include<conio.h>
int main ()
{
    int x;
    printf("Enter Year \n");
    scanf("%d", &x);
    if (!(x % 100))
    { 
        if(x % 400) 
        {
            printf("Not leap Year");
        }
        else 
        {
           printf("leap year");
        }
    }
    else
    {
         if (x % 4)
         {
            printf("Not Leap Year \n");
         }
         else
         {
            printf("Leap year \n");
         }
    
    }
getch();
}