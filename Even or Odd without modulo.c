#include<stdio.h>
#include<conio.h>
int main ()
{
    int x,y;
    printf("Enter a Number \n");
    scanf("%d", &x);
    printf(x&1?"Entered no is Odd":"Entered No is Even");
    getch();
}