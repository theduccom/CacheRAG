#include <bits/stdc++.h>
using namespace std;
#define int long long
#define stoi stoll
using ll=long long;
using vi=vector<int>;
using pii=pair<int,int>;
#define ALL(c) begin(c),end(c)
#define RALL(c) rbegin(c),rend(c)
#define ITR(i,b,e) for(auto i=(b);i!=(e);++i)
#define FORE(x,c) for(auto &x:c)
#define REPF(i,a,n) for(int i=a,i##len=(int)(n);i<i##len;++i)
#define REP(i,n) REPF(i,0,n)
#define REPR(i,n) for(int i=(int)(n);i>=0;--i)
#define SZ(c) ((int)c.size())
#define CONTAIN(c,x) (c.find(x)!=end(c))
#define OUTOFRANGE(y,x,h,w) (y<0||x<0||y>=h||x>=w)
#define dump(...)
const signed INF_=1001001001; const ll INF=1001001001001001001LL;
const int DX[9]={0,1,0,-1,1,1,-1,-1,0},DY[9]={-1,0,1,0,-1,1,1,-1,0};
template<class T> ostream& operator<<(ostream &os,const vector<T> &v) {
    ITR(i,begin(v),end(v))os<<*i<<(i==end(v)-1?"":" ");return os;}
template<class T> istream& operator>>(istream &is,vector<T> &v) {
    ITR(i,begin(v),end(v)) is>>*i;return is;}
template<class T,class U> istream& operator>>(istream &is, pair<T,U> &p) {
    is>>p.first>>p.second;return is;}
template<class T> bool chmax(T &a,const T &b){if(a<b){a=b;return 1;}return 0;}
template<class T> bool chmin(T &a,const T &b){if(a>b){a=b;return 1;}return 0;}
template<class T> using heap=priority_queue<T,vector<T>,greater<T>>;
struct{template<class T> operator T(){T x;cin>>x;return x;}} IN;
struct before_main_function {
    before_main_function() {
        cin.tie(0);ios::sync_with_stdio(false);
        cout<<setprecision(15)<<fixed;
        #define endl "\n"
    }
} before_main_function;
//------------------8<------------------------------------8<--------------------

/*
<expression> ::= <term> | <term> ('+' | '-') <term>
<term> ::= <factor> | <factor> ('*' | '/') <factor>
<factor> ::= <number> | '(' <expression> ')'
<number> ::= 0~9 | <number> <number>
*/
int expression(string &s,int &i);
int term(string &s,int &i);
int factor(string &s,int &i);
int number(string &s,int &i);

int expression(string &s,int &i) {
    int ret=term(s,i);
    while(s[i]=='+' || s[i]=='-') {
        char op=s[i++];
        int right=term(s,i);
        if(op=='+') ret+=right;
        else ret-=right;
    }
    return ret;
}
int term(string &s,int &i) {
    int ret=factor(s,i);
    while(s[i]=='*' || s[i]=='/') {
        char op=s[i++];
        int right=factor(s,i);
        if(op=='*') ret*=right;
        else ret/=right;
    }
    return ret;
}
int factor(string &s,int &i) {
    if(s[i]=='(') {
        i++;
        int expr=expression(s,i);
        i++;
        return expr;
    } else {
        return number(s,i);
    }
}
int number(string &s,int &i) {
    int num=0;
    while('0'<=s[i] && s[i]<='9') {
        num*=10;
        num+=s[i]-'0';
        i++;
    }
    return num;
}

int solve() {
    string s=IN;
    int i=0;
    return expression(s,i);
}
signed main() {
    int n=IN;
    while(n--) {
        cout<<solve()<<endl;
    }
    return 0;
}

