#include<stdio.h>
#include<conio.h>
int main()
{
    int N , i=1, sum=0 ;
    printf("Enter value of N \n");
    scanf("%d", &N);
    while (i<=N)
    {
        sum = sum + 2*i-1;
        i++;
    }
printf("Sum of First %d Natural Odd Number is %d", N, sum);
getch();
}