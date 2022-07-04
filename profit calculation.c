#include<stdio.h>
#include<conio.h>
int main()
{
    float x ,y;
    printf("Enter cost price & selling price \n");
    scanf("%f %f", &x, &y);
    if(x>y) printf("Loss Percentage is %f",((x-y)/x)*100);
    else if(x<y) printf("Profit Percentage is %f",((y-x)/x)*100);
    else printf("there is no profit or loss \n");
    getch();
}