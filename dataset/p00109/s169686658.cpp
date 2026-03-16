#include <iostream>
#include <string>
using namespace std;

string S;

int expr(int& p);
int term(int& p);
int factor(int& p);
int number(int& p);

int expr(int& p) {
    int v1 = term(p); 
    while(S[p] == '+' || S[p] == '-') {
        char op = S[p];
        p++;
        int v2 = term(p); 
        if(op == '+') {
            v1 += v2;
        } else {
            v1 -= v2;
        }
    }
    return v1;
}

int term(int& p) {
    int v1 = factor(p);
    while(S[p] == '*' || S[p] == '/') {
        char op = S[p];
        p++;
        int v2 = factor(p);
        if(op == '*') {
            v1 *= v2;
        } else {
            v1 /= v2;
        }
    }
    return v1;
}

int factor(int& p) {
    if(isdigit(S[p])) {
        return number(p);
    }

    p++;
    int res = expr(p);
    p++;
    return res;
}

int number(int& p) {
    int res = 0;
    while(isdigit(S[p])) {
        res *= 10;
        res += S[p] - '0';
        ++p;
    }
    return res;
}


int main() {
    int n;
    cin >> n;
    for(int i=0; i<n; ++i) {
        cin >> S;
        int p = 0;
        cout << expr(p) << endl;
    }
}
