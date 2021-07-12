#include<stdio.h>
int main()
{
    int a[100],i,sum=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    sum=sum+a[i];
    printf("%d\n",a[i]);}
    printf("%d\n",sum);
    return 0;
}
