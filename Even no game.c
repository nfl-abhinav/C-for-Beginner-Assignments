#include<stdio.h>
#include<conio.h>
int main()
{
    int N , i=1, a=3;
    while (i<=3)
    {
    printf("Enter a even number, you have %d chnaces \n", a);
    scanf("%d",&N);
        if(N%2==0) 
        {
           printf(" You have won the game \n");
           break;
        }
    printf("Entered No is not even number! \n ");
    i++;
    a--;
    }
    if (i==4)
    {
        printf(" Your three chances are over \n");
    }
    
getch();
}