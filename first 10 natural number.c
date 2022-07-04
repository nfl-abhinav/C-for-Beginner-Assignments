#include<stdio.h>
#include<conio.h>
int main()
{
    printf("First 10 Natural Number \n");
    int i=1;
    while (i<=10)
    {
        printf("%d \n", i);
        i++;
    }
    printf("First 10 Natural Number in reverse order \n");
    i--;
    while (i>0)
    {
        printf("%d \n", i);
        i--;
    }
getch();
}