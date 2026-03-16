#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define FOR(i,a,b) for(int i=a;i<=b;++i)
#define LL long long
using namespace std;
static const LL INF = 1LL<<61LL;
typedef pair<int,int> PII;

string a,b;
string ans;
int M;
char t[]={'0','1','2','3','4','5','6','7','8','9'};

void add(int n,int m,int c,string s){
    int k;
    //cout<<s<<" "<<a[n-1]<<" "<<b[m-1]<<" "<<c<<endl;
    if(n-1<0&&m-1<0){
        if(c!=0)s+=t[c];
        for(int i=s.size()-1;i>=0;--i){
            ans+=s[i];
        }
        return ;
    }
    if(n-1>=0&&m-1>=0)k=a[n-1]-'0'+b[m-1]-'0'+c;
    else if(n-1>=0)k=a[n-1]-'0'+c;
    else if(m-1>=0)k=b[m-1]-'0'+c;
    if(k>=10){
        k-=10;
        c=1;
    }
    else c=0;
    add(n-1,m-1,c,s+t[k]);
}

/*bool MOD1(string num){
    bool res=false;
    LL k=num.size();
    LL mod;
    int i=-1;
    LL n=0;
    while(k){
        n=(n*10)+num[i+1]-'0';
        mod=n%M;
        n=mod;
        k--;
        i++;
    }
    if(mod==0)return true;
    return false;
}
bool MOD2(string num){
    bool res=false;
    LL k=num.size();
    LL mod;
    int i=-1;
    LL n=0;
    while(k){
        n=(n*10)+num[i+1]-'0';
        mod=n%5;
        n=mod;
        k--;
        i++;
    }
    if(mod==0)return true;
    return false;
}
bool MOD3(string num){
    bool res=false;
    LL k=num.size();
    LL mod;
    int i=-1;
    LL n=0;
    while(k){
        n=(n*10)+num[i+1]-'0';
        mod=n%7;
        n=mod;
        k--;
        i++;
    }
    if(mod==0)return true;
    return false;
}
bool MOD4(string num){
    bool res=false;
    LL k=num.size();
    LL mod;
    int i=-1;
    LL n=0;
    while(k){
        n=(n*10)+num[i+1]-'0';
        mod=n%11;
        n=mod;
        k--;
        i++;
    }
    if(mod==0)return true;
    return false;
}*/
int main(){
    int n;
    cin>>n;
    rep(i,n){
    cin>>a>>b;
    //cin>>M;
        add(a.size(),b.size(),0,"");
        //if(!MOD1(ans)&&!MOD2(ans)&&!MOD3(ans)&&!MOD4(ans))cout<<ans<<endl;
        //else cout<<"king is angry"<<endl;
        if(ans.size()<=80&&a.size()<=80&&b.size()<=80)cout<<ans<<endl;
        else cout<<"overflow"<<endl;
        ans.clear();
    }
}