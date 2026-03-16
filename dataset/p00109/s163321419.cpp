#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int (i)=(0);(i)<(int)(n);++(i))
using ll = long long;
using P = pair<int, int>;
using namespace std;

/*
<四則演算の式> ::= <乗算除算の式> (+ or -) <乗算除算の式> (+ or -) ...
<乗算除算の式> ::= <括弧か数> (* or /) <括弧か数> (* or /) ...
<括弧か数>     ::= '(' <四則演算の式> ')' or <数>
<数>           ::= ...
*/

// 構文解析
using State = string::const_iterator;
class ParseError{};

int number(State &begin);
int term(State &begin);
int factor(State &begin);
int expression(State &begin);

// 数字の列をパースして，その数を返す
int number(State &begin) {
    int ret = 0;

    while (isdigit(*begin)) {
        ret *= 10;
        ret += *begin - '0';
        begin++;
    }

    return ret;
}


// 乗算除算の式をパースして，その評価結果を返す
int term(State &begin) {
    int ret = factor(begin);

    for (;;) {
        if (*begin == '*') {
            begin++;
            ret *= factor(begin);
        }
        else if (*begin == '/') {
            begin++;
            ret /= factor(begin);
        }
        else {
            break;
        }
    }

    return ret;
}

int factor(State &begin) {
    if (*begin == '(') {
        begin++; // '('を飛ばす
        int ret = expression(begin);
        begin++;
        return ret;
    }
    else {
        return number(begin);
    }
}


// 四則演算の式をパースして，その評価結果を返す
int expression(State &begin) {
    int ret = term(begin);

    for (;;) {
        if (*begin == '+') {
            begin++;
            ret += term(begin);
        }
        else if (*begin == '-') {
            begin++;
            ret -= term(begin);
        }
        else {
            break;
        }
    }

    return ret;
}

void consume(State &begin, char expected) {
    if (*begin == expected) {
        begin++;
    }
    else {
        cerr << "Expected " << expected << " but got " << *begin << endl;
        cerr << "Rest string is ";
        while (*begin) {
            cerr << *begin++;
        }
        cerr << endl;
        throw ParseError();
    }
}

int main() {
    int N;
    cin >> N;
    cin.ignore();
    rep(i, N) {
        string s;
        getline(cin, s);

        State begin = s.begin();
        int ans = expression(begin);
        //consume(begin, '=');
        cout << ans << endl;
    }
    return 0;
}

