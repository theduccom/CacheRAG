#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> l_l;
typedef pair<int, int> i_i;
template<class T>
inline bool chmax(T &a, T b) {
    if(a < b) {
        a = b;
        return true;
    }
    return false;
}

template<class T>
inline bool chmin(T &a, T b) {
    if(a > b) {
        a = b;
        return true;
    }
    return false;
}

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
//const ll mod = 1000000007;

bool IsDigit(string::iterator &itr);
int expr(string::iterator &itr);
int factor(string::iterator &itr);
int number(string::iterator &itr);

int expr(string::iterator &itr) {
    int now = factor(itr);
    /*
    if(*itr == '+') {
        itr++;
        now += expr(itr);
        return now;
    }
    if(*itr == '-') {
        itr++;
        now -= expr(itr);
        return now;
    }
    return now;
    */
    while(true) {
        if(*itr == '+') {
            itr++;
            now += factor(itr);
            continue;
        }
        if(*itr == '-') {
            itr++;
            now -= factor(itr);
            continue;
        }
        //cerr << "expr:" << now << endl;
        return now;
    }
}

int factor(string::iterator &itr) {
    //cerr << "factor:" << *itr << endl;
    int now = number(itr);
    /*
    if(*itr == '*') {
        itr++;
        now *= factor(itr);
        return now;
    }
    if(*itr == '/') {
        itr++;
        now /= factor(itr);
        return now;
    }
    return now;
    */
    while(true) {
        if(*itr == '*') {
            itr++;
            now *= number(itr);
            continue;
        }
        if(*itr == '/') {
            itr++;
            now /= number(itr);
            continue;
        }
        //cerr << "factor:" << now << endl;
        return now;
    }
}

int number(string::iterator &itr) {
    //cerr << "number:" << *itr << endl;
    int now = 0;
    if(*itr == '(') {
        itr++;
        now = expr(itr);
        itr++;
        //cerr << "number:" << now << endl;
        return now;
    }
    while(IsDigit(itr)) {
        now *= 10;
        now += *itr - '0';
        itr++;
    }
    //cerr << "number:" << now << endl;
    return now;
}

bool IsDigit(string::iterator &itr) {
    return *itr <= '9' && *itr >= '0';
}

int main() {
    //cout.precision(10);
    cin.tie(0);
    ios::sync_with_stdio(false);
    int N;
    cin >> N;
    while(N--) {
        string S;
        cin >> S;
        auto itr = S.begin();
        cout << expr(itr) << endl;
    }
    return 0;
}

