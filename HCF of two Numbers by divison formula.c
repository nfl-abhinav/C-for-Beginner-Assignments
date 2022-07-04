#include<stdio.h>
#include<conio.h>
/*
this program calculate HCF of two number by divison method
*/
int main ()
{
    int x, y, i, a, b;
    printf("Enter two Numbers \n");
    scanf("%d %d", &x, &y);
    a = x>y?x:y;  // assigning higher number to a
    b = x>y?y:x;  // assigning lower number to b
    while(1)
    {
        i = a % b; // storing reminder of a divided by by in i
        if (i==0)
        {
            printf("HCF of %d & %d is %d  \n", x, y, b);
            break;
        }
        else
        {
            a=b;  // storing divisor value in dividend for next loop
            b=i;  // storing reminder value in divior for next loop
        }
        
    }
getch();
}