#include<stdio.h>
#include<conio.h>
int main ()
{
    int N , x=1, sum=0 , i=1;
    printf("Enter Value of N \n");
    scanf("%d", &N);
    while (x<=N)
    {
        if (i%2==0)
        {
            sum = sum + i;
            x++;
        }
     i++;   
    }
printf(" Sum of first %d even Number is %d", N, sum);    
getch();   
}