#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string str;
int cur = 0;

int expression();
int term();
int factor();

int expression();

int digit() {
    int a = str[cur] - '0';
    cur++;
    return a;
}

int number() {
    int a = digit();
    while (cur < str.size() && isdigit(str[cur])) {
        a = a * 10 + digit();
    }
    return a;
}

int expression() {
    int a = term();
    while (cur < str.size() && (str[cur] == '+' || str[cur] == '-')) {
        if (str[cur] == '+') {
            cur++;
            int b = term();
            a += b;
        } else if (str[cur] == '-') {
            cur++;
            int b = term();
            a -= b;
        }
    }
    return a;
}

int term() {
    int a = factor();
    while (cur < str.size() && (str[cur] == '*' || str[cur] == '/')) {
        if (str[cur] == '*') {
            cur++;
            int b = factor();
            a *= b;
        } else if (str[cur] == '/') {
            cur++;
            int b = factor();
            a /= b;
        }
    }
    return a;
}

int factor() {
    if (str[cur] != '(') return number();
    cur++;
    int a = expression();
    cur++;
    return a;
}

int main() {
    int N = 0;
    cin>>N;
    for (int n = 0; n < N; n++) {
        cin>>str;
        cur = 0;
        cout<<expression()<<endl;
    }
}