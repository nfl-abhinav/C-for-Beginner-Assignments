#include<stdio.h>
#include<conio.h>
int main()
{
    int x , y, z;
    printf ( "Enter Value of x\n");
    scanf("%d", &x);
    printf ( "Enter Value of y\n");
    scanf("%d", &y);
    z = x;
    x = y;
    y = z;
    printf("After swapping value of x is %d and y is %d", x , y);
    getch();
      
}