#include<stdio.h>
#include<conio.h>
int main ()
{
    int N , sum=0 , i=1;
    printf("Enter Value of N \n");
    scanf("%d", &N);
    while (i<=N)
    {
        sum = sum + i*2;
        i++;   
    }
printf(" Sum of first %d even Number is %d", N, sum);    
getch();   
}