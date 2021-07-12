#include<stdio.h>
int main()
{
    int i,a,j,k;
    //scanf("%d",&a);
    for(i=0;i<5;i++)
    {
        for(j=1;j<=2*5;j++)
        {
            if(j==5-i || j==5+i)
            {
                printf(" 1");
            }
            else if(j==(5+i)-1 ||j==(5-i)+1)
            {
                printf(" 2");
            }
            else
                printf(" 3 ");
        }
        printf("\n");
    }
}
