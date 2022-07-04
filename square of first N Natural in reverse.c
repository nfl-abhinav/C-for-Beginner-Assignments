#include<stdio.h>
#include<conio.h>
int main()
{
    int N;
    printf("Enter value of N \n");
    scanf("%d",&N);
    printf("Squares of First %d Natural Number in reverse order \n",N);
    while (N>=1)
    {
        printf("%d \n", N*N);
        N--;
    }
getch();    
}