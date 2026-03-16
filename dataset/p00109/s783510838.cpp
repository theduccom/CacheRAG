#include<bits/stdc++.h>
const int INF = 1e9;
const int MOD = 1e9+7;
using LL = long long;
const LL LINF = 1e18;
using namespace std;
#define COUT(v) cout<<(v)<<endl
#define CIN(n)  int(n);cin >> (n)
#define SCIN(n) string(n);cin >> (n)
#define YES(n) cout<<((n)? "YES" : "NO")<<endl
#define Yes(n) cout<<((n)? "Yes" : "No")<<endl
#define POSSIBLE(n) cout << ((n) ? "POSSIBLE" : "IMPOSSIBLE"  ) << endl
#define Possible(n) cout << ((n) ? "Possible" : "Impossible"  ) <<endl

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) for(int i=0;i<(n);++i)
#define REPR(i,n) for(int i=n;i>=0;i--)

#define FOREACH(x,a) for(auto& (x) : (a) )

#define ALL(obj) (obj).begin(),(obj).end()

#define P pair<int,int>
#define I vector<int>
#define S set<int>
#define pb(v) push_back(v)
#define V vector
#define rt return
#define rmsame(a) sort(ALL(a)),a.erase(unique(ALL(a)), a.end())

typedef string::const_iterator State;
class PalseError {};
class Edge{
public:
    int from,to,value;
    Edge(int a,int b,int c){
        from = a;
        to = b;
        value = c;
    }
    Edge(int a,int b){
        from = a;
        to = b;
    }
};
int number(State &begin);
int expression(State &begin);
int factor(State &begin);
int term(State &begin);
int number(State &begin){
    int ret = 0;
    while(isdigit(*begin)){
        ret *= 10;
        ret += *begin - '0';
        begin++;
    }
    return ret;
}
int term(State &begin){
    int ret = factor(begin);
    while(1){
        if(*begin == '*'){
            begin++;
            ret *=  factor(begin);
        }else if(*begin == '/'){
            begin++;
            ret /= number(begin);
        }else{
            break;
        }
    }
    return ret;
}
int expression(State &begin){
    int ret = term(begin);
    while(1){
        if(*begin == '+'){
            begin++;
            ret += term(begin);
        }else if(*begin == '-'){
            begin++;
            ret -= term(begin);
        }else{
            break;
        }
    }
    return ret;
}
int factor(State &begin){
    if(*begin == '('){
        begin++;
        int ret = expression(begin);
        begin++;
    }else{
        return number(begin);
    }
}
int main(){
    string s;
    CIN(N);
    REP(a,N){
        cin >> s;
        State w = s.begin();
        COUT(expression(w));
    }
    return 0;
}

