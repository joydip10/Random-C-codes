#include<iostream>
#include<stack>
#include<stdio.h>
using namespace std;

int main()
{
    int a;
    bool state = true;
    scanf("%d",&a);
    if(a==0) return 0;
    int order[a];
    for(int j=0;j<a;j++){
        scanf("%d",&order[j]);
    stack<int> lane; int need = 1;

    for (int i = 0; i < 5; i++) {
            while (!lane.empty() && lane.top() == need) {
                need++;
                lane.pop();
            }
            if (order[i] == need) {
                need++;
            } else if (!lane.empty() && lane.top() < order[i]) {
                state = false;
                break;
            } else {
                lane.push(order[i]);
            }
        }
    }
    if (state) cout << "yes" << "\n";
        else cout << "no" << "\n";
        return 0;
}
