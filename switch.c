#include<stdio.h>
int main()
{
	int a,b;
	char x;
	scanf("%d %c  %d",&a,&x,&b);
	switch (x){
		case '+':
		printf("%d",a+b);
		break;
		case '-':
		printf("%d",a-b);
		break;
		case '*':
		printf("%d",a*b);
		break;
		case '/':
		printf("%d",a/b);
		break;
		default :
		printf("0");
	}
		return 0;
	}