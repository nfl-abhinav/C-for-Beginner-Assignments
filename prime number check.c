#include<stdio.h>
#include<stdio.h>
#include<conio.h>
int main()
{
    int N , x;
    printf("Enter a Number \n");
    scanf("%d" , &N);
    x = N/2;
    while (x>1)
    {
        if (N%x == 0)
        {
            printf("Entered Number %d is not Prime \n", N);
            break;
        }
      x--;  
    }
if (x==1) printf("Entered Number %d is prime \n", N);
getch();
}