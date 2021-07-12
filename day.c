#include<stdio.h>
int main()
{
    int a[5],i,big,p;
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
        big=a[0];
        p=1;
        for(i=0;i<5;i++){
        if(big<a[i])
            big=a[i];
            p=i;
        }
        printf("%d\n%d\n",big,p);
    return 0;
}