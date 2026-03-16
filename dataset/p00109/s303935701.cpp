#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
#include <climits>
#include <cstring>

#define rep(i, m, n) for(int i=int(m);i<int(n);i++)
#define all(c) begin(c),end(c)

template<typename T1, typename T2>
inline void chmin(T1 &a, T2 b) { if (a > b) a = b; }

template<typename T1, typename T2>
inline void chmax(T1 &a, T2 b) { if (a < b) a = b; }

//改造
typedef long long int ll;
using namespace std;
#define INF (1 << 30) - 1
#define INFl (ll)5e15
#define DEBUG 0 //デバッグする時1にしてね
#define dump(x)  cerr << #x << " = " << (x) << endl
#define MOD 1000000007


//ここから編集する
using State = string::iterator;

class Solve {
public:
    void input() {

    }

    int expression(State &begin) {
        int ret = term(begin);

        while (true) {
            if (*begin == '+') {
                begin++;
                ret += term(begin);
            } else if (*begin == '-') {
                begin++;
                ret -= term(begin);
            } else if (*begin == ' ') {
                begin++;
            } else {
                break;
            }
        }
        return ret;
    }

    int term(State &begin) {
        int ret = factor(begin);
        while (true) {
            if (*begin == '*') {
                begin++;
                ret *= factor(begin);
            } else if (*begin == '/') {
                begin++;
                ret /= factor(begin);
            } else if (*begin == ' ') {
                begin++;
            } else {
                break;
            }
        }
        return ret;
    }

    int factor(State &begin) {
        if (*begin == '(') {
            begin++;
            int ret = expression(begin);
            begin++;
            return ret;
        } else {
            return number(begin);
        }
    }

    int number(State &begin) {
        int ret = 0;
        while (*begin == ' ') begin++;
        while (isdigit(*begin)) {
            ret *= 10;
            ret += *begin - '0';
            begin++;
        }
        return ret;
    }

    void deletespace(State &begin) {

    }

    void solve() {
        input();
        int n;
        cin >> n;

        for (int i = 0; i < n; ++i) {
            string s;
//            cin.ignore(0);
//            getline(cin, s);
            cin >> s;

            State begin = s.begin();
            int ans = expression(begin);
            cout << ans << endl;
        }

    }
};


int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(10);

    Solve().solve();


    return 0;
}

