#include <bits/stdc++.h>
using namespace std;

#define DUMP(x) cerr << #x << "=" << x << endl
#define DUMP2(x, y) cerr<<"("<<#x<<", "<<#y<<") = ("<<x<<", "<<y<<")"<< endl
#define BINARY(x) static_cast<bitset<16> >(x)

#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define REP(i,m,n) for (int i=m;i<(int)(n);i++)

#define in_range(x, y, w, h) (0<=(int)(x) && (int)(x)<(int)(w) && 0<=(int)(y) && (int)(y)<(int)(h))
#define ALL(a) (a).begin(),(a).end()

typedef long long ll;
const int INF = 1e9;
typedef pair<int, int> PII;
int dx[4]={0, -1, 1, 0}, dy[4]={-1, 0, 0, 1};

// <四則演算> ::= <乗除算> | <四則演算> + <乗除算> | <四則演算> - <乗除算>
// <乗除算>   ::= <括弧か数> | <乗除算> * <括弧か数> | <乗除算> / <括弧か数>
// <括弧か数> ::= ( <四則演算> ) | <数>
// <数>       ::= [数]

typedef string::const_iterator State;
class ParseError {};

int expr(State&);
int term(State&);
int factor(State&);
int number(State&);

// 四則演算の式
int expr(State &begin)
{
    int ret = term(begin);
    while (true) {
        if (*begin == '+') {
            begin++; // skip '+'
            ret += term(begin);
        } else if (*begin == '-') {
            begin++;
            ret -= term(begin);
        } else {
            break;
        }
    }
    return ret;
}


// 乗除算
int term(State &begin)
{
    int ret = factor(begin);
    while (true) {
        if (*begin == '*') {
            begin++;
            ret *= factor(begin);
        } else if (*begin == '/') {
            begin++;
            ret /= factor(begin);
        } else {
            break;
        }
    }
    return ret;
}


// 括弧か数
int factor(State &begin)
{
    if (*begin == '(') {
        begin++; // skip '('
        int ret = expr(begin);
        begin++; // skip ')'
        return ret;
    } else {
        return number(begin);
    }
}


// 数字
int number(State &begin)
{
    int ret = 0;
    while (isdigit(*begin)) {
        ret *= 10;
        ret += (*begin - '0');
        begin++;
    }
    return ret;
}


int main()
{
    int N; cin >> N;
    rep(i, N) {
        string S; cin >> S;
        State begin = S.begin();
        cout << expr(begin) << endl;
    }
}