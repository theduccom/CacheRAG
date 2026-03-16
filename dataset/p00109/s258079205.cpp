#include <iostream>
#include <string>
#include <map>
using namespace std;

typedef pair<int,int> result;
#define value first
#define p second

result equation(const string &s, int p = 0);
result factor(const string &s, int p=0);
result term(const string &s, int p=0);

result equation(const string &s,int p) {
    result r = factor(s,p);
    while(s[r.p] == '+' || s[r.p] == '-') {
        result r_ = factor(s, r.p+1);
        if(s[r.p] == '+') r.value += r_.value;
        else r.value -= r_.value;
        r.p = r_.p;
    }
    return r;
}

result factor(const string &s, int p) {
    result r = term(s,p);
    while(s[r.p] == '*' || s[r.p] == '/') {
        result r_ = term(s, r.p+1);
        if(s[r.p] == '*') r.value *= r_.value;
        else r.value /= r_.value;
        r.p = r_.p;
    }
    return r;
}

result term(const string &s, int p) {
    if(s[p] == '(') {
        result r = equation(s,p+1);
        r.p += 1;
        return r;
    }else{
        int value = 0;
        while(isdigit(s[p]))
            value = value*10 + (s[p++] - '0');
        return result(value,p);
    }
}

int main() {
    int n;
    cin>>n;

    string s;
    for(int i=0; i<n; ++i) {
        cin>>s;
        result r = equation(s);
        cout<<r.value<<endl;
    }
}