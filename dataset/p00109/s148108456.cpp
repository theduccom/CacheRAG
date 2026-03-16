#include <bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
#define FOR(i,s,e) for (int i=s;i<(e);i++)
#define All(v) (v).begin(),(v).end()
#define mp(a,b) make_pair(a,b)
#define pb(a) push_back(a)
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
#define fi first
#define se second
#define int long long
using namespace std;
typedef long long llint;
typedef pair<int, int> P;
const int MOD = (int)1e9 + 7;
const int INF = (int)1e18 * 5;

int expr(string &s, int &i);
int term(string &s, int &i);
int factor(string &s, int &i);
int number(string &s, int &i);

int expr(string &s, int &i){
    int val = term(s, i);          // <term>
    while(s[i] == '+' || s[i] == '-'){  // [
        char opr = s[i];            // ('+' | '-')
        ++i;
        int val2 = term(s, i);      // <term>
        if(opr == '+') val += val2;
        else val -= val2;
    }                               // ]*
    return val;
}

int term(string &s, int &i){
    int val = factor(s, i);
    while(s[i] == '*' || s[i] == '/'){
        char opr = s[i];
        ++i;
        int val2 = factor(s, i);
        if(opr == '*') val *= val2;
        else val /= val2;
    }
    return val;
}

int factor(string &s, int &i){
    if(isdigit(s[i])) return number(s, i);
    ++i;    // '('
    int val = expr(s, i);
    ++i;    // ')'
    return val;
}

int number(string &s, int &i){
    int n = s[i++] - '0';
    while(isdigit(s[i])) n = n*10 + (s[i++]-'0');
    return n;
}


signed main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;
    REP(x, N){
        string s;
        s = s.substr(0, s.size()-1);
        cin >> s;
        int i = 0;
        cout << expr(s, i) << "\n";
    }
    return 0;
}
