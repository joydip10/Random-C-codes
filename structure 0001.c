#include<stdio.h>
#include<string.h>
struct cste11
{
    char name[20];
    int sid;
    double cgpa;
};
int main()
{
    struct cste11 st[10];
    int i;
    for(i=0;i<3;i++){
        scanf("%s %d %lf",st[i].name,&st[i].sid,&st[i].cgpa);
    }
    for(i=0;i<3;i++){
            printf("\t%s\n \t%d \n\t%lf\n",st[i].name,st[i].sid,st[i].cgpa);
    }
    return 0;
}
