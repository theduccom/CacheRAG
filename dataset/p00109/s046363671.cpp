#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
using namespace std;

typedef string::const_iterator State;
class ParseError {};

int expression(State &begin);

int number(State &begin) {
    int ret = 0;
    
    while (isdigit(*begin)) {
        ret *= 10;
        ret += *begin - '0';
        begin++;
    }
    
    return ret;
}

// ??¬??§?????°???????????????????????????????????????????????????
int factor(State &begin) {
    if (*begin == '(') {
        begin++;
        int ret = expression(begin);
        begin++;
        return ret;
    }else{
        return number(begin);
    }
}

int term(State &cur) {
    int ret = factor(cur);
    
    while(*cur=='*' || *cur=='/'){
        if (*cur == '*') {
            cur++;
            ret *= factor(cur);
        } else if (*cur == '/') {
            cur++;
            ret /= factor(cur);
        }
    }
    
    return ret;
}

int expression(State &cur) {
    int ret = term(cur);
    
    while(*cur=='+' || *cur=='-'){
        if (*cur == '+') {
            cur++;
            ret += term(cur);
        } else if (*cur == '-') {
            cur++;
            ret -= term(cur);
        }
    }
    
    return ret;
}

int main(void) {
    int N; cin >> N;
    while(N--){
        string s;
        cin >> s;
        State cur = s.begin();
        cout << expression(cur) << endl;
    }
    return 0;
}