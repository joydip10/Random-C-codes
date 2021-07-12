#include<stdio.h>
int main()
{
    int t,n,i,j,m;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        unsigned long long int sum=0;
        for(j=0;j<n;j++){
            scanf("%d",&m);
            if(m>0)
            sum=sum+m;
        }
        printf("Case %d: %lld\n",i,sum);
    }
    return 0;
}
