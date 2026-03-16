#include <iostream>
#include <string>
#include <queue>
#include <stack>
#include <algorithm>
#include <list>
#include <vector>
#include <complex>
#include <utility>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>
#include <bitset>
#include <ctime>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <cassert>
#include <cstddef>
#include <iomanip>
#include <numeric>
#include <tuple>
#include <sstream>
#include <fstream>

using namespace std;
#define REP(i, n) for (int (i) = 0; (i) < (n); (i)++)
#define FOR(i, a, b) for (int (i) = (a); (i) < (b); (i)++)
#define RREP(i, a) for(int (i) = (a) - 1; (i) >= 0; (i)--)
#define FORR(i, a, b) for(int (i) = (a) - 1; (i) >= (b); (i)--)
#define DEBUG(C) cerr << #C << " = " << C << endl;
using LL = long long;
using VI = vector<int>;
using VVI = vector<VI>;
using VL = vector<LL>;
using VVL = vector<VL>;
using VD = vector<double>;
using VVD = vector<VD>;
using PII = pair<int, int>;
using PDD = pair<double, double>;
using PLL = pair<LL, LL>;
using VPII = vector<PII>;
#define ALL(a) begin((a)), end((a))
#define RALL(a) rbegin((a)), rend((a))
#define SORT(a) sort(ALL((a)))
#define RSORT(a) sort(RALL((a)))
#define REVERSE(a) reverse(ALL((a)))
#define MP make_pair
#define FORE(a, b) for (auto &&a : (b))
#define FIND(s, e) ((s).find(e) != (s).end())
#define EB emplace_back

const int INF = 1e9;
const int MOD = INF + 7;
const LL LLINF = 1e18;

class Parsing {
public:
    using State = string::const_iterator;
private:
    class ParseError : std::exception {};
    int term(State &begin) {//??????
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
    int number(State &begin) {  //??°???
        int ret = 0;
        while (isdigit(*begin)) {
            ret *= 10;
            ret += (*begin) - '0';
            begin++;
        }
        return ret;
    }
    int factor(State &begin) {  //?????????
        int ret = 0;
        if (*begin == '(') {
            begin++;
            ret += expression(begin);
            begin++;
        } else {
            ret += number(begin);
        }
        return ret;
    }
    int expression(State &begin) {//????????????
        int ret = term(begin);
        while (true) {
            if (*begin == '+') {
                begin++;
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
public:
    Parsing() {}
    int getans(const string &s) {
        State itr = s.begin();
        int ans = 0;
        while (itr != s.end()) {
            ans += expression(itr);
        }
        return ans;
    }
};

void solve(int n) {
    Parsing ps;
    while (n--) {
        string s;
        cin >> s;
        s.pop_back();
        cout << ps.getans(s) << endl;
    }
    return;
}

signed main(void) {
    int n, m, p, a, b, c, x, y, z, q;
    string s;
    bool f = false;
    while (cin >> n) {
        solve(n);
        return 0;
    }
}