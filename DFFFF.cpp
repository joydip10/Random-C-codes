#include <iostream>
#include<stdio.h>
#include<bitset>
using namespace std;

int main()
{
        int T,da,db,dc,dd,ba,bb,bc,bd;
        scanf("%d",&T);
        int i;
        for(i =0; i<T;i++)
        {
                scanf("%d.%d.%d.%d",&da,&db,&dc,&dd);
                scanf("%d.%d.%d.%d",&ba,&bb,&bc,&bd);
                cout<<ba;

                if(bitset<8>(da)==ba&&bitset<8>(db)==bb&&bitset<8>(dc)==bc&&bitset<8>(dd)==bd)
                printf("Case %d: Yes\n",i+1);
                else
                printf("Case %d: No\n",i+1);

        }
        return 0;
}
