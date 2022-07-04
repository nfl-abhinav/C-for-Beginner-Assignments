#include<stdio.h>
#include<conio.h>
int main ()
{
    int x, y;
    printf("Enter Three Digit No \n");
    scanf("%d", &x);
    y = x % 100;
    printf("Middle digit of %d is %d", x , y/10);
    getch();
}