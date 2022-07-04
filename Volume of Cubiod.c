#include<stdio.h>
#include<conio.h>
int main ()
{
    int l, b, h;
    printf("Enter Length, Breadth & Height of Cubiod\n");
    scanf("%d %d %d", &l,&b,&h);
    printf("Volume of Cubiod with length=%d, Breadth =%d & Height=%d is %d", l,b,h,l*b*h);
    getch();
}