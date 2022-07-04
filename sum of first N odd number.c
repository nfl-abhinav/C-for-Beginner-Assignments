#include<stdio.h>
#include<conio.h>
int main ()
{
    int N, x=1 , i=1, sum=0;
    printf("Enter Value of N \n");
    scanf("%d", &N);
    while (x<=N)
    {
        if (i%2)
        {
            sum = sum + i;
            x++;
        }
     i++;  
    }
 printf("Sum of First %d Natural Odd Number is %d", N, sum);
 getch();    
}