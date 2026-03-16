#include<iostream>
#include<string.h>
#include<vector>
#include<list>
#include<stdio.h>
#include<math.h>
#include<iomanip>
#include<map>
#include<stack>
#include<queue>
#include<algorithm>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug " << x << endl;
using namespace std;

int main(){
    string s;
    int ans = 0;
    while(cin >> s){
        bool c = true;
        int len = s.size();
        rep(i,len / 2){
            if(s[i] != s[len - i - 1]){
                c = false;
            }
        }
        if(c) ans++;
    }
    cout << ans << endl;
}