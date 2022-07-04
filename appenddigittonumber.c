#include<stdio.h>
#include<conio.h>
int main ()
{
    int x, y;
    printf("Enter an Number & digit\n");
    scanf("%d %d", &x, &y);
    x = x*10+y;
    printf("After appending %d to x new value of x is %d", y,x);
    getch();
}