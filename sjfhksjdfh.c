#include<stdio.h>

#include<string.h>

int main()
{
    int t,c,start,end,flag,i;
    char s[1000];
    scanf("%d",&t);
    while(t--)
    {
        flag=0;
        scanf("%s",s);
            c=strlen(s);
            if(c%2==0)
            start=c/2;
            else
            start=c/2+1;
            end=c/2-1;


        for(i=0;i<=end;i++)
        {
            if(s[i]==s[start++])
            continue;
            else{
                flag=1;
                break;
            }
        }

if(flag==0)
printf("YES\n");
else    printf("NO\n");
}
return 0;

}
