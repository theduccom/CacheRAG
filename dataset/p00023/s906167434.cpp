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
    double xa, ya, ra, xb, yb, rb;
    int n;
    cin >> n;
    rep(i, n){
        int ans = 0;
        cin >> xa >> ya >> ra >> xb >> yb >> rb;
        if(sqrt(pow(abs(xa-xb), 2)+pow(abs(ya-yb), 2))+rb < ra) ans = 2;
        else if(sqrt(pow(abs(xa-xb), 2)+pow(abs(ya-yb), 2))+ra < rb) ans = -2;
        else if(sqrt(pow(abs(xa-xb), 2)+pow(abs(ya-yb), 2)) <= ra+rb) ans = 1;
        else ans = 0;
        cout << ans << endl;
    }
}