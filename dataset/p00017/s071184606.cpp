#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define repb(i, a, b) for(int i = a; i >= b; i--)
#define all(a) a.begin(), a.end()
#define int long long
using namespace std;
typedef pair<int, int> P;

string caesar(string s, int n){
    string res = s;
    rep(i, 0, s.size()){
        if('a' <= s[i] && s[i] <= 'z'){
            if(s[i] - 'a' + n < 26){
                res[i] += n;
            }else{
                res[i] += n - 26;
            }
        }
    }
    return res;
}

bool find(string s, string t){
    return s.find(t) != string::npos;
}

signed main(){
    string s;
    string str[3] = {"the", "this", "that"};
    while(getline(cin, s)){
        string t;
        bool f = false;
        rep(i, 0, 26){
            t = caesar(s, i);
            // cout << t << endl;
            rep(j, 0, 3){
                if(find(t, str[j])){
                    f = true;
                    i = 26;
                    break;
                }
            }
        }
        cout << t << endl;
    }
}