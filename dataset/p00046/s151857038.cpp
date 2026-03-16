#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;


int main(){
    double a=-1,b=-1,c;
    while(scanf("%lf",&c)!=EOF){
        if(b==-1){
            b=c;
            a=c;
        }else{
        a=max(a,c);
        b=min(b,c);
        }
    }
    printf("%.10lf\n",a-b);
    return 0;
}