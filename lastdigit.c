#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y;
    printf("Enter a number\n");
    scanf("%d", &x);
    y = x % 10;
    printf("Last digit of %d is %d", x, y);
    getch();
}