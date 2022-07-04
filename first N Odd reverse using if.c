#include<stdio.h>
#include<conio.h>
int main()
{
    int N, i=1;
    printf("Enter Value of N \n");
    scanf("%d", &N);
    printf("First %d Natural Odd Number in reverse order are \n",N);
    while (N>0)
    {
        if (i%2)
        {
            N--;
        }
    i++; 
    }
    while (i>0)
    {
        if (i%2)
        {
            printf("%d \n", i);
        }
    i--; 
    } 
getch();
}