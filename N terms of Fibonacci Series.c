#include<stdio.h>
#include<conio.h>
int main ()
{
    int x=0, y=1, i, N, sum;
    printf("Enter value of N \n");
    scanf("%d", &N);
    printf("%d terms of Fibonacci series are \n", N);
    if (N==1) printf("0\n");
    if (N==2) printf(" 0 1 \n");
    if (N>2)
    {
        printf(" 0 1");
        for(i=2; i<N; i++)
        {
            sum = x + y;
            x = y;
            y = sum;
            printf(" %d", sum);
        }
    }
getch(); 
}