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
    int a,b,c;
    int l[10],v[2];
    while (scanf("%d,",&l[0])!=EOF) {
        int tmp=l[0];
        for (int i=1;i<10;++i){
            scanf("%d,",&l[i]);
            tmp+=l[i];
        }
        scanf("%d,%d",&v[0],&v[1]);
        double chk=1.0*tmp*(v[0]*1.0/(v[0]+v[1]));
        if (chk-floor(chk)>1e-10) chk=chk+1.0;
        chk=floor(chk);
        int cnt=int(chk);
        int t=0;
        for (int i=0;i<10;i++) {
            t+=l[i];
            if (t>=cnt) {
                printf("%d\n",i+1);
                break;
            }
        }
    }
    return 0;
}