#include<stdio.h>
int main()
{
    int num,r,sum=0,temp;
    printf("enter a number : ");
    scanf("%d",&num);
    for(temp=num;num!=0;num=num/10){
        r=num%10;
        sum=sum*10+r;
    }
        printf("%d\n",sum);
    return 0;
}

