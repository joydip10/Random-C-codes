#include<stdio.h>
int main()
{
    char str[100];
    int i=0,j=-1,f=0;
    printf("enter a string : ");
    scanf("%s",str);
    while(str[++j]!='\0');
    j--;
    while(i<j)
    if(str[i++]!=str[j--]){
        f=1;
        break;
    }
    if(f==0){
        printf("the string is a palindrome\n");}
    else{
        printf("not palindrome\n");}
    return 0;
}
