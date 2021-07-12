#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int ans=0,x,y;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            scanf("%d%d",&x,&y);
            if(x||y)
                ans++;
        }
    }
    printf("%d\n",ans);
}
