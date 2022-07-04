#include<stdio.h>
#include<conio.h>
int main ()
{
    int N;
    printf("Enter Value of N \n");
    scanf("%d", &N);
    printf("First %d natural Number in reverse order are \n", N);
    while (N>0)
    {
        printf("%d \n", 2*N-1);
        N--;
    }
getch();
}