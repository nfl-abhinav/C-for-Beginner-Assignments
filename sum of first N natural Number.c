#include<stdio.h>
#include<conio.h>
int main ()
{
    int x=0, i=1,N;
    printf("Enter value of N \n");
    scanf("%d", &N);
    printf("Sum of First %d Natural Number is ", N);
    while (i<=N)
    {
        x = x + i;
        i++;
    }
printf (" %d", x);
getch();
}