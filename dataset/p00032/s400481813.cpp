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
    int ans[2]={0,0};
    while (scanf("%d,%d,%d",&a,&b,&c)!=EOF) {
        if (a==b) ans[1]+=1;
        else if (a*a+b*b==c*c) ans[0]+=1;
    }
    printf("%d\n%d\n",ans[0],ans[1]);
    return 0;
}