#include<stdio.h>
#include<conio.h>
int main()
{
    float x, y;
    printf("Enter length & breadth of rectangle\n");
    scanf("%f %f", &x,&y);
    printf("Area of Rectangle with length %f and Breadth %f is %f", x,y, x*y);
    getch();
}