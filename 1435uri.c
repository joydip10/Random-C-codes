#include<stdio.h>
int main()
{
    int A[100][100];
    int i,j,k,f,n;


    while(scanf("%d",&n))
   {


        for(i=0;i<100;i++)
        {
            for(j=0;j<100;j++)
            {
                A[i][j]=0;
            }
        }
        k=0;
        f=n;
        for( ;k<=f; )
        {
            for(i=k;i<f;i++)
            {
                for(j=k;j<f;j++)
                {
                    A[i][j]++;
                }
            }
            k++;
            f--;

        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(j==0)
                    printf("%3d",A[i][j]);
                else
                {
                    printf(" %3d",A[i][j]);
                }

            }
            printf("\n");
        }
        printf("\n");
   }

}
