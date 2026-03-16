#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string::const_iterator State;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
//const ll mod = 1000000007;

int number(State &begin);
int term(State &begin);
int expression(State &begin);
int factor(State &begin);

bool isdigit(char in) {
    if((in <= '9') && (in >= '0')) return true;
    else return false;
}

int number(State &begin) {
    int ret = 0;
    while(isdigit(*begin)) {
        ret *= 10;
        ret += *begin - '0';
        begin++;
    }
    return ret;
}

int term(State &begin) {
    int ret = factor(begin);
    for(;;) {
        if(*begin == '*'){
            begin++;
            ret *= factor(begin);
            continue;
        }
        if(*begin == '/'){
            begin++;
            ret /= factor(begin);
            continue;
        }
        break;
    }
    return ret;
}

int expression(State &begin) {
    int ret = term(begin);
    for(;;) {
        if(*begin == '+'){
            begin++;
            ret += term(begin);
            continue;
        }
        if(*begin == '-'){
            begin++;
            ret -= term(begin);
            continue;
        }
        break;
    }
    return ret;
}

int factor(State &begin) {
    int ret;
    if(*begin == '(') {
        begin++;
        ret = expression(begin);
        begin++;
    } else {
        ret = number(begin);
    }
    return ret;
}
int main() {
    //cout.precision(10);
    int n;
    cin >> n;
    cin.ignore();
    while(n--){
        string s;
        getline(cin, s);
        State begin = s.begin();
        int ans = expression(begin);
        cout << ans << endl;
    }
    return 0;
}
