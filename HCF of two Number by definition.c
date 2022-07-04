#include<stdio.h>
#include<conio.h>
int main ()
{
    int x,y,i;
    printf("Enter two numbers \n");
    scanf("%d %d", &x, &y);
    for(i=x>y?y:x; i>=1;i--)
    {
        if (x%i==0 && y%i==0)
        {
            printf("HCF of %d & %d is %d \n", x ,y,i);
            break;
        }
        
    }
getch();
}