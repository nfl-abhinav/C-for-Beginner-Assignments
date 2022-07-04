#include<stdio.h>
#include<conio.h>
int main ()
{
    float p,c,m,b,com;
    float per;
    printf("Enter Marks of Phy Chem Math Bio & Computer \n");
    scanf("%f %f %f %f %f", &p, &c, &m, &b, &com);
    per = (p+c+m+b+com)*100/500;
    if (per >= 90)
    {
        printf("Your Percentage is %f and Grade is A \n", per);
    }
    else
    {
        if (per >= 80)
        {
            printf("Your Percentage is %f and Grade is B \n", per);
        }
        else
        {
            if (per >= 70)
            {
                printf("Your Percentage is %f and Grade is C \n", per);
            }
            else
            {
                if (per >=60)
                {
                   printf("Your Percentage is %f and Grade is D \n",per);
                }
                else
                {
                    if (per > 40)
                    {
                        printf("Your Percentage is %f and Grade is E \n", per);
                    }
                    else
                    {
                        printf("Your Percentage is %f and Grade is F \n" , per);
                    }
                    
                }
                
                
            }
            
            
        }
        
        
    }
getch();    
}