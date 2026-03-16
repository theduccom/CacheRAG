#include <iostream>
#define rep(i,a,n) for(int i=a; i<n; i++)
using namespace std;

int main() {
    string s;
    getline(cin,s);
    rep(i,0,s.length()) {
        if('a' <= s[i] && s[i] <= 'z') s[i] -= 32;
    }
    cout << s << endl;
}