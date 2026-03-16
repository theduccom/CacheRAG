#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<iomanip>
#include<math.h>
#include<complex>
#include<queue>
#include<deque>
#include<map>
#include<set>
#include<bitset>
using namespace std;
#define REP(i,m,n) for(int i=(int)m ; i < (int) n ; i++ )
#define rep(i,n) REP(i,0,n)
typedef long long ll;
typedef pair<int,int> pint;
const int inf=1e9+7;
const ll longinf=1LL<<60 ;
const ll mod=998244353 ;
int dx[4]={1,0,-1,0} , dy[4]={0,1,0,-1} ;

int sum(string s,int& i);
int mul(string s,int& i);
int bracket(string s,int& i);
int num(string s,int& i);

bool isdigit(char c){
    int x=c-'0';
    return 0<=x&&x<=9;
}

int sum(string s,int& i){
    int ret=mul(s,i);
    while(s[i]=='+'||s[i]=='-'){
        char op=s[i];
        i++;
        int res=mul(s,i);
        if(op=='+')ret+=res;
        else ret-=res;
    }
    return ret;
}
int mul(string s,int& i){
    int ret=bracket(s,i);
    while(s[i]=='*'||s[i]=='/'){
        char op=s[i];
        i++;
        int res=bracket(s,i);
        if(op=='*')ret*=res;
        else ret/=res;
    }
    return ret;
}

int bracket(string s,int& i){
    if(isdigit(s[i]))return num(s,i);
    i++;
    int ret=sum(s,i);
    i++;
    return ret;
}

int num(string s,int& i){
    int ret=s[i]-'0';
    i++;
    while(isdigit(s[i])){
        ret=10*ret+(int)(s[i]-'0');
        i++;
    }
    return ret;
}

int main(){
    int n;
    cin>>n;
    rep(j,n){
        string s;
        cin>>s;
        int i=0;
        cout<<sum(s,i)<<endl;
    }
}
