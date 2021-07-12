#include<stdio.h>
#include<string.h>
int main()
{
    int l=0,c,i,min,max,a=0;
    char str1[50],str2[50];
    printf("enter a string:\t");
    gets(str1);
    l=strlen(str1);
    for(i=0;i<l;i++)
    {
        if((str1[i]=='a'||str1[i]=='e'||str1[i]=='i'||str1[i]=='o'||str1[i]=='u'))
        {
            printf("%c",str1[i]);
            continue;
        }
        else{
                min=i;
                break;
            }
    }
    for(i=l-1;i>=0;i--)
    {
        if((str1[i]=='a'||str1[i]=='e'||str1[i]=='i'||str1[i]=='o'||str1[i]=='u'))
        {
            //continue;
        }
        else{
                max=i;
                break;
            }
    }
    for(c=min;c<=max-1;c++)
    {
        if((str1[c]=='a'||str1[c]=='e'||str1[c]=='i'||str1[c]=='o'||str1[c]=='u'))
        {
            continue;
        }
        else
        {
            printf("%c",str1[c]);
        }

    }
    //str2[a]='\0';

    for(i=max;i<=l;i++)
    {
        printf("%c",str1[i]);
    }
    str1[i]='\0';
    return 0;
}
