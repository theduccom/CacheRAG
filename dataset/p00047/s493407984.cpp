#include<cstdio>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    char ans='A',p,q;
    while(scanf("%c,%c",&p,&q)!=EOF){
        if(p==ans)ans=q;
        else if(q==ans)ans=p;
    }
    cout<<ans<<endl;
    return 0;
}