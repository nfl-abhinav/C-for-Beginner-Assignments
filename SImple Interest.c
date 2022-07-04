#include<stdio.h>
#include<conio.h>
int main()
{
    float principal, rate_of_interest,time;
    printf("Enter Principal Amount (in Rs), Rate of Interest & time(in Year)\n");
    scanf("%f %f %f", &principal,&rate_of_interest,&time);
    printf("Simple Interest is %f", principal*rate_of_interest*time*.01);
    getch();
}