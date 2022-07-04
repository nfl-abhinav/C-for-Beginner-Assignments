#include<stdio.h>
#include<conio.h>
int main ()
{
    int x;
    printf("Enter a Number \n");
    scanf("%d" , &x);
    if(x % 6) printf("Not Divisible By 2 &3");
    else printf("Divisible by 2 &3");
    getch();
}