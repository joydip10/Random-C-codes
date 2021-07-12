#include<stdio.h>
int main()
{
    int n,i=0,r;
    printf("enter any number : ");
    scanf("%d",&n);
    for(i;n!=0;n=n/10){
        r=n%10;
        i=i*10+r;
    }
    printf("reversed of number : %d\n",i);
    return 0;
}
