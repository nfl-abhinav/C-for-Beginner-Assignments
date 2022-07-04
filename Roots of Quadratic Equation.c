#include<stdio.h>
#include<conio.h>
int main ()
{
    int a,b,c,D;
    printf("Enter constant a,b & c of quadratic equation \n");
    scanf("%d %d %d" , &a ,&b, &c);
    D = b*b-4*a*c;
    if (D>0)
    {
        printf (" Two Roots of Quadratic Equation are real & Distinct in Nature \n");
    }
    else
    {
        if (D<0)
        {
            printf (" Two Roots of Quadratic Equation are Complex in Nature \n");
        }
        else printf (" Two Roots of Quadratic Equation are real & equal \n");
    }
getch();    
}