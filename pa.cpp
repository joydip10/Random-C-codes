#include<bits/stdc++.h>
#include<stdio.h>
#include<stack>
#include<queue>
using namespace std;
int main()
{
    int ar[1000]={0},n;
    while(1){
    scanf("%d",&n);
    if(n==0){
       break;
    }
    queue<int> ck;
    stack<int> cj;
    queue<int> ch;
    for(int i=0;i<n;i++){
    scanf("%d",&ar[i]);
    ck.push(ar[i]);
    }
   /* while(!ck.empty()){
        printf("%d ",ck.front()) ;
          ck.pop();
          }*/
    int ma=1;
    while(!ck.empty()){
        if(ck.front()==ma)
           {
               printf("%d ",ck.front()) ;
               printf("%d\n",ma);
               ch.push(ck.front());
               ck.pop();
               ma++;
            }
        else{
                printf("%d\n",ck.front());
            cj.push(ck.front());
            ck.pop();
        }
        }
        printf("%d ",ch.front()) ;
          }
          /*while(!cj.empty()){
        printf("%d ",cj.top) ;
          cj.pop();
          }*/
   /* int c=0;
  for(int k=1;k<=n;){
    if(k!=ch.front()){
        c++;
    }
    else if(k==cj.top()){
        cj.pop();
        k++;
        c++;
    }
    else{
        c=0;
        break;
    }
  }
    if(c==0){
        printf("yes\n");
    }
    else{
        printf("no\n");
    }
    }*/
    return 0;
}

