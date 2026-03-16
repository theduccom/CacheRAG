#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)

int main(void){
    string s;
    while(getline(cin, s)){
        rep(i, s.size()) {
            if(s[i]>='a' && s[i]<='z') s[i] +='A'-'a';
        }
        cout << s << endl;
    }
}