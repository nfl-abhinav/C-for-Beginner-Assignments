#include<stdio.h>
#include<conio.h>
int main ()
{
    int x;
    printf("Enter any Number \n");
    scanf("%d", &x);
    if(x>0) printf("Entered Number is positive \n ");
    else if (x<0) printf("Entered Number is negative \n ");
    else printf("Entered number is Zero \n");
    getch();
}