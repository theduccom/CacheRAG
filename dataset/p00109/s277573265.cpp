#include <bits/stdc++.h>
#include <cctype>
#define FOR(i,a,b) for(ll i=(a);i<(b);++i)
#define rep(i,n) FOR(i,0,n)
#define all(x) (x).begin(),(x).end()
#define PRINT(V) cout << V << "\n"
#define SORT(V) sort((V).begin(),(V).end())
#define RSORT(V) sort((V).rbegin(), (V).rend())
using namespace std;
using ll = long long;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
const ll INF = 1e15;
typedef pair<ll,ll> P;
typedef string::const_iterator State;
class ParseError {};
int expression(State &begin);
int term(State &begin);
int number(State &begin);
int factor(State &begin);
int number(State &begin){
    int ret = 0;
    while(isdigit(*begin)){
        ret *= 10;
        ret += *begin - '0';
        begin++;
    }
    return ret;
}
int expression(State &begin){
    int ret = term(begin);
    for(;;){
        if (*begin == '+'){
            begin++;
            ret += term(begin);
        }
        else if (*begin == '-'){
            begin++;
            ret -= term(begin);
        }
        else{
            break;
        }
    }
    return ret;
}
int factor(State &begin){
    if (*begin == '('){
        begin++;
        int ret = expression(begin);
        begin++;
        return ret;
    }
    else{
        return number(begin);
    }
}
int term(State &begin){
    int ret = factor(begin);
    for(;;){
        if (*begin == '*'){
            begin++;
            ret *= factor(begin);
        }
        else if(*begin == '/'){
            begin++;
            ret /= factor(begin);
        }
        else{
            break;
        }
    }
    return ret;
}

int main(){
    int N;
    cin >> N;
    cin.ignore();
    rep(i,N){
        string s;
        getline(cin,s);
        State begin = s.begin();
        int ans = expression(begin);
        cout << ans << endl;
    }
    return 0;
}
