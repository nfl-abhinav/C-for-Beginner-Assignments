#include<stdio.h>
#include<conio.h>
int main ()
{
    int x;
    printf("Enter Month number \n");
    scanf("%d",&x);
    if (x==1 || x==3 || x==5 || x==7 || x==8 || x==10 || x==12)
    {
        printf(" There are 31 days in entered Month Number %d", x);
    }
    else
    {
        if (x==4 || x==6 || x==9 || x==11)
        {
            printf(" There are 30 days in entered Month Number %d", x);
        }
        else
        {
            if (x==2)
            {
                printf(" There are 28 days in entered Month Number %d", x);
            }
            else printf(" Entered Month Number %d is not correct", x);
        }
        
    }
getch();    
}