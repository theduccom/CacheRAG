#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cctype>
#include<climits>
#include<iostream>
#include<string>
#include<vector>
#include<map>
//#include<list>
#include<queue>
#include<deque>
#include<algorithm>
//#include<numeric>
#include<utility>
#include<complex>
//#include<memory>
#include<functional>
#include<cassert>

const int dx[] = {1, 0, -1, 0};
const int dy[] = {0, 1, 0, -1};
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef complex<double> C;

typedef string::const_iterator State;
class ParseError {};
int expression(State& begin);
int term(State& begin);
int number(State& begin);
int factor(State& begin);

int expression(State& begin) {
    int ret = term(begin);
    for (;;) {
        if (*begin == '+') {
            begin++;
            ret += term(begin);
        } else if (*begin == '-') {
            begin++;
            ret -= term(begin);
        } else break;
    }
    return ret;
}

int term(State& begin) {
    int ret = factor(begin);
    for (;;) {
        if (*begin == '*') {
            begin++;
            ret *= factor(begin);
        } else if (*begin == '/') {
            begin++;
            ret /= factor(begin);
        } else break;
    }
    return ret;
}

int factor(State& begin) {
    if (*begin == '(') {
        begin++;
        int ret = expression(begin);
        begin++;
        return ret;
    } else {
        return number(begin);
    }
}

int number(State& begin) {
    int ret = 0;
    while (isdigit(*begin)) {
        ret = ret*10 + (*begin - '0');
        begin++;
    }
    return ret;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        string s;
        getline(cin, s);

        State begin = s.begin();
        int ans = expression(begin);
        cout << ans << endl;
    }
    return 0;
}