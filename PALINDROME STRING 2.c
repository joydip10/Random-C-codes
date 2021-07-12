#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],r[100];
    int i,j;
    scanf("%s",s);
    for(i=strlen(s)-1,j=0;i>=0;i--,j++){
        r[j]=s[i];
    }
    if(strcmp(s,r)){
        printf("it is palindrome\n");
    }
    else{
        printf("not palindrome\n");
    }
    return 0;
}
