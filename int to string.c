#include<stdio.h>
#include<string.h>
int main()
{
    int num = 321;
char snum[5];

// convert 123 to string [buf]
itoa(num, snum, 10);
int l = strlen(snum);
// print our string
printf("%d\n", l);
}
