#include<stdio.h>
#include<string.h>
int main()
{
	char name[50][50];
	int i;
	for(i=0;i<5;i++){
		gets(name[i]);}
	for(i=0;i<5;i++){
		printf("NAME ");
		
		puts(name[i]);}
	return 0;
	
}