#include<stdio.h>
#include<conio.h>
int main ()
{
    int a,p;
    printf("Enter Age(in Years) & Investmnet Amout(in Rs) \n");
    scanf("%d %d", &a , &p);
    if (a<18 || a>55 ) printf("This Policy is not for your Age Group");
    else if (p<10000 || p>100000) printf("Investment amount should be between Rs 10,000 & Rs 1,00,000 \n");
    else if (a>=18 && a<25) printf("Your maturity amount will be %f", p+p*.05*30);
    else if (a>=25 && a<40) printf("Your maturity amount will be %f", p+p*.05*20);
    else  printf("Your maturity amount will be %f", p+p*.05*10);
    getch();
}