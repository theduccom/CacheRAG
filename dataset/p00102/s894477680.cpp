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

int table[11][11];

int main(){
    int n;
    while(cin >> n, n){
    rep(i, n)rep(j, n) cin >> table[i][j];
    rep(i, n){
        int total =0;
        rep(j, n) total += table[i][j];
        table[i][n] = total;
    }
    rep(i, n+1){
        int total =0;
        rep(j, n) total += table[j][i];
        table[n][i] = total;
    }

    rep(i, n+1){
        rep(j, n+1) printf("%5d", table[i][j]);
        cout << endl;
    }
    }
}