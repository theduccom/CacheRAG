#include <bits/stdc++.h>
#define LL long long
#define ULL unsigned long long
#define REP(i, n) for(int i=0; i<(n); i++)
#define REP2(i, x, n) for(int i=x; i<(n); i++)
#define SORT(n) sort((n).begin(), (n).end())
#define SORT2(n) sort((n).begin(), (n).end(), greater<int>())
using namespace std;
int main(){
    
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int n;
    cin >> n;
    string s;
    
    REP(i,n){
        
        cin >> s;
        
        string ma = s, mi = s;
        
        SORT2(ma);
        SORT(mi);
        
        int res1 = numeric_limits<int>::min();
        int res2 = numeric_limits<int>::max();
        
        res1 = max(res1, stoi(ma));
        res2 = min(res2, stoi(mi));
        
        cout << res1 - res2 << endl;
    }
    return 0;
}