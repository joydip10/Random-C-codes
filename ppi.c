#include<stdio.h>
int main()
{
	int a,b,m,n;
	scanf("%d",&n);
	for(m=1;m<=n;m++){
	scanf("%d",&a);
	if(a==1||a==0)
	printf("%d nao eh primo\n",a);
	if(a==2||a==3)
	printf("%d nao eh primo\n",a);
	else{
	for (b=2;b<=a;b++){
        if(a%3==0){
            printf("%d nao eh primo\n",a);
            break;
        }
		if(a%b==0){
			printf("%d nao eh primo\n",a);
			break;}
		else{
			printf("%d eh primo\n",a);
			break;
		}
	}
	}
	}
	return 0;
}
