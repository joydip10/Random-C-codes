#include<stdio.h>
int main()
{
	int n,i,x=0;
	scanf("%d",&n);
	for(i=2;i<n;i++){
		if (n%i==0){
		printf("not prime");
		break;}
		else if (n%i!=0||n==2){
			printf(" prime");
			break;}}
			return 0;
}