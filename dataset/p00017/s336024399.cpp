#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
int diff(char c, char base) {
    return (c-base+26)%26;
}
int conv(char c, int d) {
    return (c-d-'a'+26)%26+'a';
}
int main(void){
    string s;
    while(getline(cin, s)) {
        int d;
        rep(i, s.size()) {
            if(i<s.size()-3 &&
                    (diff(s[i], 't') == diff(s[i+1], 'h') &&
                     diff(s[i], 't') == diff(s[i+2], 'i') &&
                     diff(s[i], 't') == diff(s[i+3], 's')) || 
                    (diff(s[i], 't') == diff(s[i+1], 'h') &&
                     diff(s[i], 't') == diff(s[i+2], 'a') &&
                     diff(s[i], 't') == diff(s[i+3], 't'))) {
                d = diff(s[i], 't');
                break;
            }
            if(i<s.size()-2 &&
                    (diff(s[i], 't') == diff(s[i+1], 'h') &&
                     diff(s[i], 't') == diff(s[i+2], 'e'))) {
                d = diff(s[i], 't');
                break;
            }
        }
        rep(i, s.size()) {
            if(s[i] >='a' && s[i]<='z') s[i] = conv(s[i], d);
        }
        cout << s << endl;
    }
}