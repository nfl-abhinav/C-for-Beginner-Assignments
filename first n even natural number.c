#include<stdio.h>
#include<conio.h>
int main ()
{
    int N , i=1;
    printf("Enter value of N \n");
    scanf("%d", &N);
    printf("First %d Even Number are \n", N);
    while (N>0)
    {
        if(i%2==0) 
        {
           printf("%d \n", i);
           N--;
        }
    i++;
    }
  getch();  
}