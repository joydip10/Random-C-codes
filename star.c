#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,j;
    d=1;
    b=3;
    while(b>=1)
    {
        c=b;
        while(c>=2)
        {
            printf(" ");
            c--;
        }
        a=1;
        while(a<=d)
        {
            printf("*");
            a++;
        }
        printf("\n");
         b--;
         d=d+2;
    }

    e=5;
    f=2;
    i=1;
    while(f>=1)
    {
        g=1;
        while(g<=i)
        {
            printf(" ");
            g++;
        }
        while(e>=1)
        {
            printf("*");
            e=e-2;
        }
        printf("\n");
        f--;
        e=e-1;
        i++;
   }
   return 0;
}