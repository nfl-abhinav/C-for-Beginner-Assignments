#include<stdio.h>
#include<conio.h>
int main ()
{
    int x;
    printf("Enter a number \n");
    scanf("%d",&x);
    printf(x>=0?"Entered No  is Positive":"Entered No  is Non-Positive");
    getch();
}