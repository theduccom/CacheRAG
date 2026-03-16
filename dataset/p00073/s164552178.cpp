#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<cmath>
#include<algorithm>
using namespace std;

/**
 * vector<int>ar(3);
 * for(auto&e:ar){
 *     scanf("%d",&e);
 * }
 * sort(ar.begin(),ar.end())
 * int sum=accumulate(ar.begin(),ar.end(),0);
 **/

int main(){
    int mod=1000000007;
    int x,h;
    for (;;) {
        scanf("%d",&x);
        scanf("%d",&h);
        if (x==h && x==0) break;
        printf("%lf\n",1.0*x*x+sqrt((1.0*x/2)*(1.0*x/2)+h*h)*x*2);
    }
    return 0;
}