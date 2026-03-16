#include<bits/stdc++.h>
using namespace std;

#define int long long

typedef pair<int,int>pint;
typedef vector<int>vint;
typedef vector<pint>vpint;
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(v) (v).begin(),(v).end()
#define rep(i,n) for(int i=0;i<(n);i++)
#define reps(i,f,n) for(int i=(f);i<(n);i++)
#define each(it,v) for(__typeof((v).begin()) it=(v).begin();it!=(v).end();it++)
template<class T,class U>inline void chmin(T &t,U f){if(t>f)t=f;}
template<class T,class U>inline void chmax(T &t,U f){if(t<f)t=f;}

string s,t;
string ans;
int tmp[222222];


void solve(){
    cin>>s>>t;
    ans=string();
    reverse(all(s));reverse(all(t));
    if(s.size()<t.size())s+=string(t.size()-s.size(),'0');
    if(t.size()<s.size())t+=string(s.size()-t.size(),'0');

    memset(tmp,0,sizeof(tmp));
    rep(i,s.size()){
        tmp[i]+=s[i]-'0'+t[i]-'0';
        tmp[i+1]+=tmp[i]/10;
        tmp[i]%=10;
    }

    rep(i,s.size()){
        ans+=string(1,'0'+tmp[i]);
    }
    if(tmp[s.size()])ans+=string(1,'0'+tmp[s.size()]);
    reverse(all(ans));

    if(ans.size()>80)cout<<"overflow"<<endl;
    else cout<<ans<<endl;
}

signed main(){
    int T;cin>>T;
    while(T--)solve();
}