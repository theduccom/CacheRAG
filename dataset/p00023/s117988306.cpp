#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;

int main(){
    int mod=1000000007;
    int n;
    int ans;
    double xa,ya,ra,xb,yb,rb;
    scanf("%d",&n);
    for (int i=0;i<n;i++) {
        scanf("%lf %lf %lf %lf %lf %lf",&xa,&ya,&ra,&xb,&yb,&rb);
        double tmp=sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
        if ((tmp+rb)<ra) {
            printf("2\n");
        } else if ((tmp+ra)<rb) {
            printf("-2\n");
        } else if ((tmp)>(ra+rb)) {
            printf("0\n");
        } else {
            printf("1\n");
        }
    }
    return 0;
}