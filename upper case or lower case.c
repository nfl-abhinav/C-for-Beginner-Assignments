#include<stdio.h>
#include<conio.h>
int main ()
{
    char x, A='A', Z='Z', a='a', z='z';
    printf("Enter a Alphabet \n");
    scanf("%c",&x);
    if(x>=A && x<=Z) printf("Entered Character %c is Uppercase Alphabet", x);
    else if(x>=a && x<=z) printf("Entered Character %c is Lowercase Alphabet", x);
    else printf("Entered Symbol %c is not alphabet", x);
    getch();
}