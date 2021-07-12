#include<stdio.h>
int main()
{
    int v=20;
    int *ip;
    ip=&v;
    printf("address of v %x\naddress stored in ip %x\nvalue of ip %d\n",&v,ip,*ip);
    return 0;
}
