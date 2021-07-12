#include<stdio.h>
#include<string.h>
int main()
{
    char str[10000];
    int l, i, count=1;
    scanf("%s",str);
    l = strlen(str);
    for( i=0 ; i<l ; i++ )
    {
        if( str[i]>='A' && str[i]<='Z' )
            ++count;
    }
    printf("%d\n", count);
    return 0;
}
