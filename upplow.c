#include<stdio.h>
#include<string.h>
int main()
{
    int i,a=0,b=0;

    char str[100];
    scanf("%s",str);
    int l = strlen(str);
    for(i=0;i<l;i++){
        if(str[i]>='a' && str[i]<='z')
            a++;
    }
    b=l - a;
    if(a>b){
        for(i=0;i<l;i++){
            if(str[i]>='a' && str[i]<='z')
                continue;
            else
            str[i] = str[i]+ 32;
        }
    }
    else
    for(i=0;i<l;i++){
            if(str[i]>='A' && str[i]<='Z')
                continue;
            else
            str[i] = str[i]- 32;
    }
    printf("%s\n",str);
    return 0;

}
