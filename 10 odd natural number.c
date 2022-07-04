#include<stdio.h>
#include<conio.h>
int main ()
{
    int x=1, i=1;
    printf("First 10 Odd number are \n");
    while (x<=10)
    {
        if(i%2)
        {
            printf("%d \n", i);
            x++;
        }
        i++;
    }
getch();
}