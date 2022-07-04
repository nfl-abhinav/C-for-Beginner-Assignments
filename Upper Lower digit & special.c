#include<stdio.h>
#include<conio.h>
int main()
{
    char x;
    printf("Enter a Character \n");
    scanf("%c", &x);
    if ((x>=32 && x<=47) || (x>=58 && x<=64) || (x>=91 && x<=96) || (x>=123 && x<=126) )
    {
        printf("Entered Character %c is Special Character \n", x);
    }
    else
    {
        if (x>=48 && x<=57)
        {
            printf("Entered Character %c is digit \n",x);
        }
         else
         {
            if (x>=65 && x<=90)
            {
                printf("Entered Character %c is Uppercase Alphabet \n",x);
            }
            else
            {
                //if (x>=97 && x<=122)
                //{
                    printf("Entered character %c is Lowercase Alphabet \n", x);
                //}
               // else printf("Entered character %c is neither Alphabet or Digit or Special Character \n", x);
            }
            
            
         }
         
    }
 getch();   
}