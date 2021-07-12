#include<stdio.h>
#include<string.h>
int main()
{
    char n[100];
    int i,l;
    while(scanf("%s",n)==1){
        l=strlen(n);
        for(i=l-1;i>=0;i--){
            printf("%c",n[i]);
        }
        printf(" ");
    }
    return 0;
}
