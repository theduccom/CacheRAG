#include <bits/stdc++.h>
#define For(i, a, b) for(int (i)=(a); (i)<(b); ++(i))
#define rFor(i, a, b) for(int (i)=(a)-1; (i)>=(b); --(i))
#define rep(i, n) For((i), 0, (n))
#define rrep(i, n) rFor((i), (n), 0)
#define fi first
#define se second
using namespace std;
typedef long long lint;
typedef unsigned long long ulint;
typedef pair<int, int> pii;
typedef pair<pii, int> ppi;
typedef complex<double> xy_t;
typedef vector<lint> poly;
template<class T>bool chmax(T &a, const T &b){if(a<b){a=b; return true;} return false;}
template<class T>bool chmin(T &a, const T &b){if(a>b){a=b; return true;} return false;}

const lint mod = 1e9+7;
const lint INF = mod;
const int MAX = 100010;

int expression(string &s, int &idx);
int term(string &s, int &idx);
int factor(string &s, int &idx);
int number(string &s, int &idx);

int expression(string &s, int &idx){
    int ret=term(s, idx);
    while(true) {
        if (s[idx]=='+') ++idx, ret+=term(s, idx);
        else if(s[idx]=='-') ++idx, ret-=term(s, idx);
        else break;
    }
    return ret;
}

int term(string &s, int &idx){
    int ret=factor(s, idx);
    while(true) {
        if (s[idx]=='*') ++idx, ret*=factor(s, idx);
        else if(s[idx]=='/') ++idx, ret/=factor(s, idx);
        else break;
    }
    return ret;
}

int factor(string &s, int &idx){
    if(s[idx]=='('){
        ++idx;
        int ret=expression(s, idx);
        ++idx;
        return ret;
    }
    else return number(s, idx);
}

int number(string &s, int &idx){
    int ret=0;
    while(0<=s[idx]-'0' && s[idx]-'0'<=9){
        ret=ret*10+(s[idx]-'0');
        ++idx;
    }
    return ret;
}

int main(){
    int q;
    scanf("%d", &q);
    while(q--){
        string s;
        cin >> s;
        int idx=0;
        printf("%d\n", expression(s, idx));
    }
}
