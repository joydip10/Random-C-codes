#include<stdio.h>
int main()
{
	int i,j=1,n=1;
	for(n;n<=5;n++){
		for(i=4;i>=n;i--){
			printf(" ");
		}
		for(j=1;j<=n;j++){
			printf("*");
		}
		printf("\n");
		}
		return 0;
	}