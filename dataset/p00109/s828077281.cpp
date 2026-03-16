#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
//#include <boost/multiprecision/cpp_int.hpp>
//typedef boost::multiprecision::cpp_int ll;
typedef long double dd;
#define i_7 (ll)(1E9+7)
//#define i_7 998244353
#define i_5 i_7-2
ll mod(ll a){
    ll c=a%i_7;
    if(c>=0)return c;
    return c+i_7;
}
typedef pair<ll,ll> l_l;
ll inf=(ll)1E17;

#define rep(i,l,r) for(ll i=l;i<=r;i++)
#define pb push_back
ll max(ll a,ll b){if(a<b)return b;else return a;}
ll min(ll a,ll b){if(a>b)return b;else return a;}
void Max(ll &pos,ll val){pos=max(pos,val);}//Max(dp[n],dp[n-1]);
void Min(ll &pos,ll val){pos=min(pos,val);}
void Add(ll &pos,ll val){pos=mod(pos+val);}
dd EPS=1E-9;
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
///////////////////////////////////////


typedef string::const_iterator State;
ll siso(State &begin);
ll jou(State &begin);
ll kak(State &begin);
ll num(State &begin);

ll num(State &begin){
    ll ret=0;
    while(isdigit(*begin)){
        ret*=10;
        ret+=*begin-'0';
        begin++;
    }
    return ret;
}
ll kak(State &begin){
    if(*begin=='('){
        begin++;
        ll ret=siso(begin);
        begin++;
        return ret;
    }else{
        return num(begin);
    }
}
ll jou(State &begin){
    ll ret=kak(begin);
    while(1){
        if(*begin=='*'){
            begin++;
            ret*=kak(begin);
        }else if(*begin=='/'){
            begin++;
            ret/=kak(begin);
        }else{
            break;
        }
    }
    return ret;
}
ll siso(State &begin){
    ll ret=jou(begin);
    while(1){
        if(*begin=='+'){
            begin++;
            ret+=jou(begin);
        }else if(*begin=='-'){
            begin++;
            ret-=jou(begin);
        }else{
            break;
        }
    }
    return ret;
}

int main(){fastio
    //freopen("Input.txt","r",stdin);freopen("Output.txt","w",stdout);
    
    ll n;cin>>n;cin.ignore();
    while(n--){
        string s;
        getline(cin,s);
        State b=s.begin();
        cout<<siso(b)<<endl;
    }
    
    return 0;
}
