#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y,z;
    printf("Enter three digit number\n");
    scanf("%d",&x);
    y = x % 10;
    z = x / 10;
    x = 100*y + z;
    printf("New Number after rotaing digit of x by right is %d", x);
    getch();4
}