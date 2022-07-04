#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter Three digit number\n");
    scanf("%d", &x);
    printf("First digit of %d is %d", x, x/100);
    getch();
}