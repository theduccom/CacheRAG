#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define pp pair<int,int>
#define ll long long
#define ld long double
int inf=100000000;
ll INF=5000000000000000000;
ll MOD=1000000007;


int main() {
    while (true){
    int n;
    cin >> n;
    if (n==0) break;
    vector<pp> a(n);
    int y,u,t;
    rep(i,n){
        cin >> t >> y >> u;
        a.at(i).first=y+u;
        a.at(i).second=t;
    }
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    cout << a.at(0).second << " " << a.at(0).first << endl;
}
}

