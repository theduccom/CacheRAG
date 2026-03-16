#include <bits/stdc++.h>
using namespace std;

bool solve(){
    int n, m;
    cin >> n >> m;
    if(n == 0) return false;
    vector<int> p(n);
    for(int i=0;i<n;i++){
        cin >> p[i];
    }
    sort(p.rbegin(), p.rend());
    int ans = 0;
    for(int i=0;i<n;i++){
        if((i+1)%m==0) continue;
        ans += p[i];
    }
    cout << ans << endl;
    return true;
}

int main() {
    while(solve());
    return 0;
}

