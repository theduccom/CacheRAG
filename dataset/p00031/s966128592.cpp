#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
#include<map>
using namespace std;

int main(){
    int mod=1000000007;
    int n;
    int w[10];
    w[0]=1;
    for (int i=1;i<10;++i) {
        w[i]=w[i-1]<<1;
    }
    while (scanf("%d",&n)!=EOF) {
        int tmp=0;
        stack<int> st;
        for (int i=9;i>=0;--i) {
            if (w[i]<=n) {
                st.push(w[i]);
                n-=w[i];
                tmp++;
            }
        }
        for (int i=0;i<tmp-1;++i) {
            printf("%d ",st.top());
            st.pop();
        }
        printf("%d\n",st.top());
    }
    return 0;
}