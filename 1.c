#include<stdio.h>
int main()
{
    long long int a;
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%lld",&a);
        printf("Case %d: %lld\n",i,a/2);
        }
    return 0;
}
