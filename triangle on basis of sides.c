#include<stdio.h>
#include<conio.h>
int main ()
{
int x , y, z;
printf("Enter length of three side of traingle \n");
scanf("%d %d %d", &x, &y, &z);
if (x+y>z && x+z>y && y+z>x)
{
    printf("Traingle is valid \n");
}
else printf("Triangle is not valid \n");
getch();
}
