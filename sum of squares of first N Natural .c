#include<stdio.h>
#include<conio.h>
int main ()
{
    int N, i=1, sum=0;
    printf("Enter value of N \n");
    scanf("%d", &N);
    while (i<=N)
    {
        sum = sum + i*i;
        i++;
    }
printf("Sum of squares of first %d Natural Number is %d", N, sum);
getch();
}