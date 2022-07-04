#include<stdio.h>
#include<conio.h>
int main()
{
    int x=1, i=1;
    printf("Squares of first 10 even natural number \n");
    while (x<=10 )
    {
        if (i%2==0) 
        {
            printf("%d \n",i*i);
            x++;
        }
        i++;
    }
    printf(" Squares of first 10 even natural number in reverse order \n");
    x=1;
    while (x<=10 )
    {
        if (i%2==0) 
        {
            printf("%d \n",i*i);
            x++;
        }
        i--;
    }
getch(); 
}