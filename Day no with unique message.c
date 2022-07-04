#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main ()
{
    int N;
    while(1)
    {
    printf("Enter Day Number of Week \n1 for Monday \n2 for Tuesday \nand so on.. \n8 for exit \n");
    scanf("%d",&N);
    switch (N)
    {
    case 1:
        printf("Monday ! Keep Smiling \n");
        break;
    case 2:
        printf("Tuesday ! Yo Can Do it \n");
        break;
    case 3:
        printf("Wednesday ! Make it Happen \n");
        break;
    case 4:
        printf("Thursday ! Things will work Out \n");
        break;
    case 5:
        printf("Friday ! No Guts No Story \n");
        break;
    case 6:
        printf("Saturday ! Do your Work \n");
        break;
    case 7:
        printf("Sunday ! Never Expect Anything in Return \n");
        break;
    case 8:
        exit(0);
    default:
        printf("Invalid Choice \n");
    }

    }
    
}