#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
#include<cstdlib>
#include<cctype>
using namespace std;
#define P pair<int, const char*>
#define REP(i, j) for(int i = 0; i < j; i++)
#define FOR(i, j, k) for(int i = j; i < k; i++)

P fact(const char *p);
P term(const char *p);
P expr(const char *p);

int main(){
    int c; cin >>c;
    REP(i, c){
        string str; cin >>str;
        cout <<expr(str.substr(0, str.size()).c_str()).first <<endl;
    }
    return 0;
}

P fact(const char *p){
    if(isdigit(*p)){
        int t = *(p++) - '0';
        while(isdigit(*p)) t = t * 10 + *(p++) - '0';
        return P(t, p);
    } else if(*p == '('){
        P r = expr(p + 1);
        if(*r.second != ')') exit(0);
        return P(r.first, r.second + 1);
    } else{
        exit(0);
    }
}


P term(const char *p){
    P r = fact(p);
    while(*r.second == '*' || *r.second == '/'){
        char op = *r.second;
        int tmp = r.first;
        r = fact(r.second + 1);
        if(op == '*') r.first = tmp * r.first;
        else r.first = tmp / r.first;
    }
    return r;
}

P expr(const char *p){
    P r = term(p);
    while(*r.second == '+' || *r.second == '-'){
        char op = *r.second;
        int tmp = r.first;
        r = term(r.second + 1);
        if(op == '+') r.first = tmp + r.first;
        else r.first = tmp - r.first;
    }
    return r;
}