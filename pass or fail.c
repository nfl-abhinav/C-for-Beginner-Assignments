#include<stdio.h>
#include<conio.h>
int main()
{
    int subject1, subject2, subject3, subject4, subject5;
    printf("Enter marks of Five Subject \n");
    scanf("%d %d %d %d %d", &subject1 , &subject2, &subject3, &subject4, &subject5);
    if(subject1>=33) printf("You are pass in Subject1 \n");
    else printf("You are fail in Subject1 \n");
    if(subject2>=33) printf("You are pass in Subject2 \n");
    else printf("You are fail in Subject2 \n");
    if(subject3>=33) printf("You are pass in Subject3 \n");
    else printf("You are fail in Subject3 \n");
    if(subject4>=33) printf("You are pass in Subject4 \n");
    else printf("You are fail in Subject4 \n");
    if(subject5>=33) printf("You are pass in Subject5 \n");
    else printf("You are fail in Subject5 \n");
    getch();
    
}