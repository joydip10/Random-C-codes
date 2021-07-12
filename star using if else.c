#include<stdio.h>
int main()
{
	int c,str;
	for(c=1;c<=5;c++){
		for(str=1;str<=5;str++){
			if(str<c){
				printf(" ");}
			else{
				printf("*");}
		}
		printf("\n");
	}
	return 0;
}