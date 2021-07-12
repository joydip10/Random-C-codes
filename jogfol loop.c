#include<stdio.h>
int main()
{
	int a,i,n,count=0,sum=0;
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		scanf("%d",&n);
		if(n>=0){
			count++;
			sum=sum+n;
		}
	}
	printf("%d %d", count,sum);
	return 0;
}
