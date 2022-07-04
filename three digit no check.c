#include<stdio.h>
#include<conio.h>
int main ()
{
    int x;
    printf("Enter any Number \n");
    scanf("%d",&x);
    x = x/100;
    if(x>=1 & x<10)
    printf("Entered no has three digit \n");
    else
    printf("Entered no is not of three digit \n");
    getch();
}