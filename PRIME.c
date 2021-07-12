#include<stdio.h>
int main()
{
    int i,j,p=0;
    for(i=2;i<100;i++){
            p=0;
        for(j=2;j<i/2;j++){
            if(i%j==0){
                p++;
            break;}
        }
        if(p==0)
            printf("%d ",i);
    }
    return 0;
}
