#include<stdio.h>
#include<conio.h>
int main()
{
    float x, y, z;
    printf("Enter three Number\n");
    scanf("%f %f %f",&x,&y,&z);
    printf("Average of %f %f %f is %f", x, y, z , (x+y+z)/3);
    getch();
}