#include <iostream>
#include <vector>
#include <cmath> // ??????
 
#define REP(i,n) for(int i = 0; i < n; i++)
 
using namespace std;
 
struct FourArithmeticOperationParser {
    
    int pos;
    bool div_zero;
    string Formula;
    const long long INF = 0x7fffffffffffffff;
    
    long long operator () (string F) {
        pos = 0;
        div_zero = false;
        Formula = F;
        long long ret = expr();
        return div_zero ? INF : ret;
    }
    
    long long number() {
        long long ret = 0;
        while (pos != Formula.size()) {
            if (Formula[pos] < '0' || Formula[pos] > '9') {
                break;
            } else {
                ret *= 10;
                ret += (Formula[pos++] - '0');
            }
        }
        return ret;
    }
    
    long long expr() {
        long long x = term();
        while (pos < Formula.size()) {
            switch (Formula[pos]) {
                case '+':
                    pos++;
                    x += term();
                    continue;
                case '-':
                    pos++;
                    x -= term();
                    continue;
            }
            break;
        }
        return x;
    }
    
    long long term() {
        long long x = factor();
        while (pos < Formula.size()) {
            switch (Formula[pos]) {
                case '*':
                    pos++;
                    x *= factor();
                    continue;
                case '/':
                    pos++;
                    long long div = factor();
                    if (div == 0) {
                        div_zero = true;
                    } else {
                        x /= div;
                    }
                    continue;
            }
            break;
        }
        return x;
    }
    
    long long factor() {
        if (pos < Formula.size()) {
            if (Formula[pos] == '(') {
                pos++;
                long long ret = expr();
                if (Formula[pos] == ')') {
                    pos++;
                }
                return ret;
            }
        }
        return number();
    }
    
};
 
int main() {
    
    int N; cin >> N;
    REP(i,N) {
        string s; cin >> s;
        cout << FourArithmeticOperationParser()(s.substr(0,s.size() - 1)) << endl;
    }
    
    return 0;
}