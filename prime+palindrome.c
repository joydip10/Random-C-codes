#include<stdio.h>
int main()
{
    int i, j, isPrime;
    for(i = 2; i <= 100; i++){
            isPrime = 0;
    for(j = 2; j <= i/2; j++){
            if(i % j == 0){
                isPrime = 1;
    break;              }
     }
       if(isPrime==0)
        printf("%d ",i);
        }
    getch();
    return 0;
}
