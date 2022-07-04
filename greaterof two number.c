#include<stdio.h>
#include<conio.h>
int main ()
{
    int x, y;
    printf("Enter Any Two Number \n");
    scanf("%d %d", &x , &y);
    //if(x==y) printf("Both Number are same i.e. %d \n",x);
    //if(x>y) printf("%d is greater than %d \n" , x,y);
    //if(y>x) printf("%d is greater than %d \n" ,y, x);
    if(x==y) printf("Both Number are same i.e. %d \n",x);
    else if(x>y) printf("%d is greater than %d \n" , x,y);
    else printf("%d is greater than %d \n" ,y, x);
    getch();

}