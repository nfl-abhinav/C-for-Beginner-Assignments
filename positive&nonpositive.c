#include<stdio.h>
#include<conio.h>
int main ()
{
    int x;
    printf("Enter a Number \n");
    scanf("%d", &x);
    if (x>=0) printf("Entered Number x i.e. %d is Positive \n",x);
    if (x<0)  printf("Entered Number x i.e. %d is Non Positive \n",x);
     getch();
}