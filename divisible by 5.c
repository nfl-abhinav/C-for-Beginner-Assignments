#include<stdio.h>
#include<conio.h>
int main ()
{
    int x;
    printf("Enter a Number \n");
    scanf("%d", &x);
    x = x % 5;
    printf(x==0?"Entered Number is divisible by 5":"Entered Number is not divisible by 5");
    getch();
}