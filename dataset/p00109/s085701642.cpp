#include <bits/stdc++.h>
#define ll long long
#define INF 1000000005
#define MOD 1000000007
#define EPS 1e-10
#define rep(i,n) for(int i=0;i<(int)(n);++i)
#define rrep(i,n) for(int i=(int)(n)-1;i>=0;--i)
#define srep(i,s,t) for(int i=(int)(s);i<(int)(t);++i)
#define each(a,b) for(const auto& (a): (b))
#define all(v) (v).begin(),(v).end()
#define len(v) (int)(v).size()
#define zip(v) sort(all(v)),v.erase(unique(all(v)),v.end())
#define cmx(x,y) x=max(x,y)
#define cmn(x,y) x=min(x,y)
#define fi first
#define se second
#define pb push_back
#define show(x) cout<<#x<<" = "<<(x)<<endl
#define sar(a,n) {cout<<#a<<":";rep(pachico,n)cout<<" "<<a[pachico];cout<<endl;}

using namespace std;

template<typename S,typename T>auto&operator<<(ostream&o,pair<S,T>p){return o<<"{"<<p.fi<<","<<p.se<<"}";}
template<typename T>auto&operator<<(ostream&o,set<T>s){for(auto&e:s)o<<e<<" ";return o;}
template<typename S,typename T,typename U>
auto&operator<<(ostream&o,priority_queue<S,T,U>q){while(!q.empty())o<<q.top()<<" ",q.pop();return o;}
template<typename K,typename T>auto&operator<<(ostream&o,map<K,T>&m){for(auto&e:m)o<<e<<" ";return o;}
template<typename T>auto&operator<<(ostream&o,vector<T>v){for(auto&e:v)o<<e<<" ";return o;}
void ashow(){cout<<endl;}template<typename T,typename...A>void ashow(T t,A...a){cout<<t<<" ";ashow(a...);}
template<typename S,typename T,typename U>
struct TRI{S fi;T se;U th;TRI(){}TRI(S f,T s,U t):fi(f),se(s),th(t){}
bool operator<(const TRI&_)const{return(fi==_.fi)?((se==_.se)?(th<_.th):(se<_.se)):(fi<_.fi);}};
template<typename S,typename T,typename U>
auto&operator<<(ostream&o,TRI<S,T,U>&t){return o<<"{"<<t.fi<<","<<t.se<<","<<t.th<<"}";}

typedef pair<int, int> P;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<double> vd;
typedef vector<P> vp;
typedef vector<string> vs;

const int MAX_N = 100005;

int dfs1(int& pos, const string& s);
int dfs2(int& pos, const string& s);

int dfs3(int& pos, const string& s){
    if(isdigit(s[pos])){
        int res = 0;
        while(isdigit(s[pos])){
            res = res * 10 + (s[pos++] - '0');
        }
        return res;
    }
    pos++;
    const int res = dfs1(pos, s);
    pos++;
    return res;
}

// m, d
int dfs2(int& pos, const string& s){
    int res = dfs3(pos, s);
    while(pos < (int)s.size()){
        if(s[pos] == '*'){
            ++pos, res *= dfs3(pos, s);
        }else if(s[pos] == '/'){
            ++pos, res /= dfs3(pos, s);
        }else break;
    }
    return res;
}

// a, s
int dfs1(int& pos, const string& s){
    int res = dfs2(pos, s);
    while(pos < (int)s.size()){
        if(s[pos] == '+'){
            ++pos, res += dfs2(pos, s);
        }else if(s[pos] == '-'){
            ++pos, res -= dfs2(pos, s);
        }else break;
    }
    return res;
}

int parse(const string& s){
    int pos = 0;
    return dfs1(pos, s);
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    string s;
    rep(i,t){
        cin >> s;
        cout << parse(s) << "\n";
    }
    return  0;
}
