#include<stdio.h>
#include<conio.h>
int main ()
{
    int x ;
    printf("Enter a number \n");
    scanf("%d", &x);
    x = x/10;
    x = x*10;
    printf("New Value of x after appending zero as last digit is %d", x);
    getch();
}