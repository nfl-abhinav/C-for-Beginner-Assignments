#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter radius of circle\n");
    scanf("%d",&x);
    printf("Area of Circle with radius %d is %f ", x , 3.14*x*x);
    getch();
}   