#include<stdio.h>
#include<conio.h>
int main ()
{
    int x , y, i=1, z;
    printf("Enter two Numbers \n");
    scanf("%d %d" , &x, &y);
    if (x>y)
    {
        while (1)
        {
           z = x * i;
           if (z%y == 0)
           {
            printf(" LCM of %d and %d is %d \n", x , y, z);
            break;
           }
           i++;
        }
        
    }
    if (y>x)
    {
        while (1)
        {
           z = y * i;
           if (z%x == 0)
           {
            printf(" LCM of %d and %d is %d \n", x , y, z);
            break;
           }
           i++;
        }
        
    }
    if ((y==x))
    {
        printf("LC of %d & %d is %d \n", x , y , x);
    }
getch();
}