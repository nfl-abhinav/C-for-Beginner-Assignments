#include<stdio.h>
#include<conio.h>
int main ()
{
    int x;
    printf("Enter an Number \n");
    scanf("%d", &x);
    x = x % 2;
    printf(x==0?"Entered Number is Even":"Entered Number is Odd");
    getch();
}