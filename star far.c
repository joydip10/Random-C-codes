#include<stdio.h>
int main ()
{
	int a,b,c,d;
	a=0;
	while(a<5){
		b=0;
		while(b<a){
			printf(" ");
			b++;}
			c=5;
			while(c>a){
				printf("*");
				c--;}
	printf("\n");
	a++;}
}