#include<stdio.h>
#include<conio.h>
int main ()
{
    int N, i=1;
    printf("Enter Value of N \n");
    scanf("%d", &N);
    printf("Squares of first %d Natural Number are \n",N);
    while (i<=N)
    {
       printf("%d \n", i*i);
       i++;
    }
getch();
}