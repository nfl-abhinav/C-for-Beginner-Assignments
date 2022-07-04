#include<stdio.h>
#include<conio.h>
int main ()
{
    int N, i=1;
    printf ("Enter Number of Natutal Number to be dipslayed \n");
    scanf("%d", &N);
    while (i<N)
    {
        i++;
    }
    printf("First %d Natural Number in reverse order are \n", N);
    while (i>0)
    {
        printf("%d \n",i);
        i--;
    }
getch();
}