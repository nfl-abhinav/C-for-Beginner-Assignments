#include<stdio.h>
#include<conio.h>
int main ()
{
    int x, y;
    printf("Enter value of x \n");
    scanf("%d",&x);
    printf("Enter value of y \n");
    scanf("%d",&y);
    x = x*y;
    y = x/y;
    x = x/y;
    printf("After Swapping Value stored in x is %d and value stored in y is %d", x, y);
    getch();
}