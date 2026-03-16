#include <iostream>
#include <string>
#include <cstdio>
#include <cctype>
using namespace std;

char s[200];
char *p;

int E();
int F();
int T();
int N();

#ifdef DEBUG
#define dump(s) cerr << s << endl
#else
#define dump(...)
#endif

int E(){
    int res = F();
    while(*p=='+' || *p=='-'){
        if(*p=='+') p++, res += F();
        else if(*p=='-') p++, res -= F();
    }
    return res;
}

int F(){
    int res = T();
    while(*p=='*' || *p=='/'){
        if(*p=='*') p++, res *= T();
        else if(*p=='/') p++, res /= T();
    }
    dump(res);
    return res;
}

int T(){
    int res;
    if(*p=='(') p++, res = E(), p++;
    else res = N();
    return res;
}

int N(){
    int res = 0;
    while(isdigit(*p)){
        res = res*10 + *p - '0';
        p++;
    }
    return res;
}

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> s;
        p = s;
        cout << E() << endl;
    }
}