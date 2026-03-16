#include <bits/stdc++.h>
#define ll long long
#define INF 1000000005
#define MOD 1000000007
#define EPS 1e-10
#define rep(i,n) for(int i=0;i<(int)(n);++i)
#define rrep(i,n) for(int i=(int)(n)-1;i>=0;--i)
#define srep(i,s,t) for(int i=(int)(s);i<(int)(t);++i)
#define each(a,b) for(auto (a): (b))
#define all(v) (v).begin(),(v).end()
#define len(v) (int)(v).size()
#define zip(v) sort(all(v)),v.erase(unique(all(v)),v.end())
#define cmx(x,y) x=max(x,y)
#define cmn(x,y) x=min(x,y)
#define fi first
#define se second
#define pb push_back
#define show(x) cout<<#x<<" = "<<(x)<<endl
#define spair(p) cout<<#p<<": "<<p.fi<<" "<<p.se<<endl
#define svec(v) cout<<#v<<":";rep(kbrni,v.size())cout<<" "<<v[kbrni];cout<<endl
#define sset(s) cout<<#s<<":";each(kbrni,s)cout<<" "<<kbrni;cout<<endl
#define smap(m) cout<<#m<<":";each(kbrni,m)cout<<" {"<<kbrni.first<<":"<<kbrni.second<<"}";cout<<endl

using namespace std;

typedef pair<int,int> P;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<double> vd;
typedef vector<P> vp;
typedef vector<string> vs;

const int MAX_N = 100005;

// <expr>   ::= <term> [ ('+'|'-') <term> ]*
// <term>   ::= <factor> [ ('*'|'/') <factor> ]*
// <factor> ::= <number> | '(' <expr> ')'
// <number> :== ???????????°

int expr(int& pos);
int term(int& pos);
int factor(int& pos);
int number(int& pos);

string s;

int expr(int& pos){
    int res = term(pos);
    while(s[pos] == '+' || s[pos] == '-'){
        if(s[pos] == '+'){
            res += term(++pos);
        }else{
            res -= term(++pos);
        }
    }
    return res;
}

int term(int& pos){
    int res = factor(pos);
    while(s[pos] == '*' || s[pos] == '/'){
        if(s[pos] == '*'){
            res *= factor(++pos);
        }else{
            res /= factor(++pos);
        }
    }
    return res;
}

int factor(int& pos){
    if(isdigit(s[pos])) return number(pos);
    pos++;  //'('?????¨??°???
    int res = expr(pos);
    pos++;  //')'?????¨??°???
    return res;
}

int number(int& pos){
    string res;
    while(isdigit(s[pos])){
        res.pb(s[pos++]);
    }
    return stoi(res);
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    rep(i,n){
        cin >> s;
        int pos = 0;
        cout << expr(pos) << "\n";
    }
    return 0;
}