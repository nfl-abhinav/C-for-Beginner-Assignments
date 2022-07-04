#include<stdio.h>
#include<conio.h>
int main ()
{
    int N , f=1,i;
    printf("Enter value of N \n");
    scanf("%d", &N);
    i = N;
    if (N==0) printf("Factorial of 0 is 1 \n");
    if (N<0)  printf("Factorial of Negative number is not possible \n");
    if (N>=1)
    {
       while (N>=1)
    {
        f = f * N;
        N--;
    }
    printf("Factorial of %d is %d ", i, f);
    }    
getch();   
}