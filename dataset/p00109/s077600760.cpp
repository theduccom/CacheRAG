#include <iostream>
#include <iomanip>
#include <cstdio>
#include <string>
#include <cstring>
#include <deque>
#include <list>
#include <queue>
#include <stack>
#include <vector>
#include <utility>
#include <algorithm>
#include <map>
#include <set>
#include <complex>
#include <cmath>
#include <limits>
#include <cfloat>
#include <climits>
#include <ctime>
#include <cassert>
#include <numeric>
#include <functional>
#include <cctype>
using namespace std;

#define rep(i,a,n) for(int (i)=(a); (i)<(n); (i)++)
#define repq(i,a,n) for(int (i)=(a); (i)<=(n); (i)++)
#define repr(i,a,n) for(int (i)=(a); (i)>=(n); (i)--)
#define int long long int

template<typename T> void chmax(T &a, T b) {a = max(a, b);}
template<typename T> void chmin(T &a, T b) {a = min(a, b);}
template<typename T> void chadd(T &a, T b) {a = a + b;}

typedef pair<int, int> pii;
typedef long long ll;

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
constexpr ll INF = 1001001001001001LL;
constexpr ll MOD = 1000000007LL;

typedef string::const_iterator State;
class ParseError {};

struct Parser {
    // ??°?????????????????????
    int number(State &begin) {
        int ret = 0;
        while(isdigit(*begin)) {
            ret *= 10;
            ret += (*begin - '0');
            begin++;
        }
        return ret;
    }

    // ??¬??§?????°????????????
    int factor(State &begin) {
        if(*begin == '(') {
            begin++; // '(' ????£???°???
            int ret = expression(begin);
            begin++; // ')' ????£???°???
            return ret;
        }
        else return number(begin);
    }

    // ??????????????????????????????
    int term(State &begin) {
        // ????????????????????¨????????£????????°??????????????§???????????????
        // begin ?????????????????°?????§???????????????
        int ret = factor(begin);

        while(1) {
            if(*begin == '*') {
                begin++;
                ret *= factor(begin);
            }
            else if(*begin == '/') {
                begin++;
                ret /= factor(begin);
            }
            else break;
        }

        return ret;
    }

    // ??????????????????????????????
    int expression(State &begin) {
        int ret = term(begin);
        while(1) {
            if(*begin == '+') {
                begin++;
                ret += term(begin);
            }
            else if(*begin == '-') {
                begin++;
                ret -= term(begin);
            }
            else break;
        }
        return ret;
    }
};

signed main() {
    int N; cin >> N;
    rep(i,0,N) {
        Parser ps;
        string s; cin >> s;
        State begin = s.begin();
        int ans = ps.expression(begin);
        cout << ans << endl;
    }
    return 0;
}