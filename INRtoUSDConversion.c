#include<stdio.h>
#include<conio.h>
int main ()
{
    int x; 
    printf("Enter Amount in  INR \n");
    scanf("%d", &x);
    printf("Amount of INR %d in USD is %f $", x, x/76.23);
    getch();
}