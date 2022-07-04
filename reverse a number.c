#include<stdio.h>
#include<conio.h>
int main ()
{
    int x , y=0 , i;
    printf("Enter a Number \n");
    scanf("%d",&x);
    while (x>0)
    {
        i = x % 10;    // assigning last digit of x in i
        y = 10*y + i;   // storing value of i in y place value wise
        x = x / 10;     // removing last digit from x
    }
printf(" Reverse of Entered Nummber is %d", y);
getch();
}