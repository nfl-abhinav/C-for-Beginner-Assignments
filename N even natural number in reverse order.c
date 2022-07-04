#include<stdio.h>
#include<conio.h>
int main()
{
    int N;
    printf("Enter Value of N \n");
    scanf("%d",&N);
    printf("%d Even Number in reverse order are \n", N);
    while (N)
    {
        printf("%d \n", N*2);
        N--;
    }
getch();    
}