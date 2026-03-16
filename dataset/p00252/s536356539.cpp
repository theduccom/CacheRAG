#include <bits/stdc++.h>

#define REP(i ,n) for(int i=0 ;i < n; i++)
#define REPB(i ,n) for(int i=n; i >= 0; i--)
#define FOR(i ,m ,n) for(int i=m; i < n; i++)
#define FORB(i, m, n) for(int i=m; i>= m; i--)
#define ll long long
#define pb push_back
#define popb pop_back
using namespace std;

int main(){
    int b1, b2, b3;
    string ans;
    cin >> b1 >> b2 >> b3;
    
    if(b1 == 1 && b2 == 1 && b3 == 0){
    ans = "Open";
    }else if(b1 == 0 && b2 == 0 && b3 == 1){
      ans = "Open";
      }else{
        ans = "Close";
      }
      cout << ans << endl;
     return 0;
}

