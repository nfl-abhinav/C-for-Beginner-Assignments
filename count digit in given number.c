#include<stdio.h>
#include<conio.h>
int main ()
{
    int N, i=1, x=10;
    printf("Enter an Number \n");
    scanf("%d" , &N);
    while (1)
    {
       if (N/x == 0)
       {
        printf( "Entered Number %d has %d digit \n" , N,i);
        break;
       }
       else
       {
        i++;
        x = 10* x;
       }
    }
getch();
}