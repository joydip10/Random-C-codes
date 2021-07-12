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
    struct cste11 st;
    strcpy(st.name,"shuvo");
    st.sid= 1601036;
    st.cgpa = 2.72;
    printf("\t%s \n\t%d \n\t%lf",st.name,st.sid,st.cgpa);
    return 0;
}
