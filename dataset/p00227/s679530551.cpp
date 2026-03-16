#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef vector<vb> vbb;
typedef pair<int, int> pii;
typedef long long ll;
typedef unsigned long long ull;

#define all(a)  (a).begin(),(a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define pb push_back
#define mp make_pair

#define loop(i,a,b) for(int i=(a);i<ull(b);++i)
#define rep(i,n) loop(i,0,n)

const double eps = 1e-10;
const double pi  = acos(-1.0);
const double inf = (int)1e8;

int main(){
    int n, m;
    while(cin >> n >> m, n+m){
        vi v(n, 0);
        rep(i, n) cin >> v[i];
        sort(all(v), greater<int>());
        int ans =0;
        rep(i, n){
            if((i+1)%m==0) continue;
            ans +=v[i];
        }
        cout << ans << endl;
    }
}