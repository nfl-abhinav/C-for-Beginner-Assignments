#include<stdio.h>
#include<conio.h>
int main ()
{
    int x , y ,  z;
    printf ("Enter any Three Number \n");
    scanf ("%d %d %d", &x, &y, &z);
    if (x>y)
    {
        if (x>z) printf("%d is greatest",x);
        else 
        {
            if(x<z) printf("%d is greatest",z);
            else printf(" %d & %d are equally greater than %d", x, z, y);
        }
    }
    else
    {
        if(y>x)
        {
            if(y>z) printf("%d is greatest",y);
            else 
            {
                if (y<z) printf("%d is greatest",z);
                else printf(" %d & %d are equally greater than %d", y, z ,x);
            }
        }
        else
        {
            if (x>z) printf(" %d & %d are equally greater than %d", x, y, z);
            else 
            {
                if(x<z) printf(" %d is greatest", z);
                else printf(" %d , %d & %d all are equal", x, y, z);
            }
            
        }
        
    }
getch();
}
