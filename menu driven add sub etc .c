#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main ()
{
    int x , y, add, sub, mul, div, N;
    while (1)
    {
    printf("Enter Two Number\n");
    scanf("%d %d", &x, &y);
    printf("Enter 1 for Addition \n2 for Substraction \n3 for Multiplication \n4 for Division \n5 for exit \n");
    scanf("%d",&N);
    
    switch (N)
    {
    case 1:
        add = x + y;
        printf(" Sum of %d & %d is %d \n" , x, y, add);
        break;
    case 2:
        sub = x + y;
        printf(" Sub of %d & %d is %d \n" , x, y, sub);
        break;
    case 3:
        mul = x * y;
        printf(" Mul of %d & %d is %d \n" , x, y, mul);
        break;
    case 4:
        div = x / y;
        printf(" Div of %d by %d is %d \n" , x, y, div);
        break;
    case 5:
    exit(0);
    
    default:
        printf("Invalid Choice \n");
    }
    }
getch();
}