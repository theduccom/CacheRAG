#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;

int main(){
    double tmp[20][2];
    int cnt=0;
    double ans=0.0;
    while (scanf("%lf,%lf",&tmp[cnt][0],&tmp[cnt][1])!=EOF) {
        cnt++;
    }
    for (int i=0;i<cnt;++i) {
        ans+=(tmp[i][0]-tmp[(i+1)%cnt][0])*(tmp[i][1]+tmp[(i+1)%cnt][1]);
    }
    ans=abs(ans);
    printf("%lf\n",ans/2.0);
    return 0;
}