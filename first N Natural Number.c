#include<stdio.h>
#include<conio.h>
int main ()
{
    int N,i=1;
    printf ("Enter how many natural number be displayed over screen \n");
    scanf("%d", &N);
    printf("first %d Natural Number are \n", N);
    while (i<=N)
    {
        printf("%d \n",i);
        i++;
    }
getch();
}