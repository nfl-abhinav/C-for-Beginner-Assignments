#include<stdio.h>
#include<conio.h>
int main ()
{
    // ||  or operator
    int x;
    printf("Enter a Number \n");
    scanf("%d", &x);
    if ( x % 7 && x % 3 ) printf("Entered Number is not divisible 7 & 3 ");
    else printf("Entered Number is Divisible by 7 or 3");
    getch();
}