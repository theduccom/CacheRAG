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
        if(a==-1){
            a=c;
            b=c;
        }
        if(c>a)a=c;
        if(c<b)b=c;
    }
    printf("%.10lf\n",a-b);
    return 0;
}