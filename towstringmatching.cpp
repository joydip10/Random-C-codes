#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l,t;
    string str1,str2;
    scanf("%d",&t);
    while(t--)
    {
        int ch=0,ch1=0;
        scanf("%s %s",str1,str2);
        l=strlen(str1);
        rep(l)
        {
            if(ch[i]!=ch1[i])
            {
                ch=0;
                if(ch[i]!='?'){ch++;}
                if(ch1[i]!='?'){ss++;}
                if(ch==2){cout<<"No"<<endl; break;}
            }
        }
        if(ch!=2){cout<<"Yes"<<endl;}
    }
    return 0;
}
