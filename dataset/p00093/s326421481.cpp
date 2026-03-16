#include<iostream>
#include<string>
#include<algorithm>
#include<list>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<numeric>
#include<vector>
#include<cstdio>
#include<climits>
#include<cfloat>
#include<cstring>
#define foreach(t,p,tit) for(t::iterator tit=p.begin();tit!=p.end();++tit)
#define rforeach(t,p) for(t::reverse_iterator it=p.rbegin();it!=p.rend();++it)
#define all(p) p.begin(),p.end()
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
char uru[3100]={};

#define MAX 3000
int main()
{
    memset(uru,0,sizeof(uru));
    rep(i,MAX+1)if(i%4==0)uru[i]=1;
    rep(i,MAX+1)if(i%100==0)uru[i]=0;
    rep(i,MAX+1)if(i%400==0)uru[i]=1;

    int a,b,f=0,na=1;
    while(cin>>a>>b)
    {
        na = 1;
        if(a==0&&b==0)break;
        if(f){cout<<endl;f=0;}
        for(int i=a;i<=b;i++)if(uru[i]){cout << i << endl; na = 0;}
        
        if(na)cout << "NA"<<endl;

        f=1;
    }
    //cout<<endl;
    
    return 0;
}