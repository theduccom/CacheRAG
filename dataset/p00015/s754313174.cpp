#include <iostream>
#include <cstdio>
#include <vector>
#include <list>
#include <algorithm>
#include <cmath>
#include <stack>
#include <set>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define FOR(i,a,b) for(int (i)=(a); (i)<(b); (i)++)
#define PUSH(n,v) for(int i=0; i<(n); i++) {int j; cin >> j; v.push_back(j);}
#define ALL(v) v.begin(), v.end()

string getsumstr(string a, string b) {
    int carry = 0;
    string sum = "";
    int alen = a.length();
    int blen = b.length();
    while(alen && blen) {
        int an = a[alen-1] - '0';
        int bn = b[blen-1] - '0';
        if (an + bn + carry < 10) {
            sum += to_string(an + bn + carry);
            carry = 0;
        }else {
            sum += to_string(an + bn + carry - 10);
            carry = 1;
        }
        alen--;
        blen--;
    }
    if (alen > 0) {
        while(alen) {
            int an = a[alen-1] - '0';
            if(an + carry < 10) {
                sum += to_string(an + carry);
                carry = 0;
            }else {
                sum += to_string(an + carry - 10);
                carry = 1;
            }
            alen--;
        }
    }else {
        while(blen) {
            int bn = b[blen-1] - '0';
            if(bn + carry < 10) {
                sum += to_string(bn + carry);
                carry = 0;
            }else {
                sum += to_string(bn + carry - 10);
                carry = 1;
            }
            blen--;
        }
    }
    if (carry) sum += "1";
    reverse(sum.begin(), sum.end());
    return sum;
}

int main() {
    string a, b;
    int n;
    cin >> n;
    REP(i,n) {
        cin >> a >> b;
        if (a.size() > 80 || b.size() > 80) cout << "overflow" << endl;
        else {
            string sum = getsumstr(a,b);
            if (sum.size() > 80) cout << "overflow" << endl;
            else cout << sum << endl;
        }
    }
    return 0;
}