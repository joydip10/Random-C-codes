#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int tc;
    scanf("%d",&tc);
    for(int s=0;s<tc;s++){
    char str[1000];
    int i,j,k,la;
    scanf("%s",&str);
    char a[1000]={'\0'},b[1000]={'\0'},c[500]={'\0'};
    int l=strlen(str);
    int x= l/2;
    for(i=0;i<x;i++){
       a[i]= str[i];
       c[i] = '0';
    }
    printf("%s\n",c);
    if(l%2==0)
        {
            for(int k=x,j=0;k<la;j++,k++){
               b[j]= str[k];
        }
    }
    else{
            for(int k=x+1,j=0;k<l;k++,j++){
            b[j]= str[k];
        }
    }
    for(i=0;i<x;i++)
    {
        for(j=0;j<x;j++){
            if(a[i]==b[j]){
                b[i]= '1';
            }
        }
    }
    printf("%s\n",b);
    if(strcmp(b,c)==0)
        printf("YES\n");
    else
        printf("NO\n");
    }
    return 0;
}
