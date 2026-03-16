#include<bits/stdc++.h>
#define F first
#define S second
#define endl '\n'
#define lcm( a, b ) ((a)/__gcd(a,b)*(b))
#define MP make_pair
#define pb push_back
#define all(x) (x).begin(),(x).end()

using namespace std;

typedef long long LL;
typedef pair<int, int> P;
typedef pair<int, P> i_P;
typedef pair< LL, LL > L_P;

const int INF = INT_MAX;
const int MIN = INT_MIN;
const LL LINF = LLONG_MAX;
const int MOD = 1000000000 + 7;
const int SIZE = 100005;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    while( true ) {
        int n;
        cin >> n;
        if( n == 0 ) break;
        int mx = 0, num;
        for( int i  = 0; i < n; ++i ) {
            int a, b, c;
            cin >> a >> b >> c;
            if( mx < b + c ) {
                mx = b + c;
                num = a;
            }
        }
        cout << num << " " <<  mx << endl;
    }
    return 0;
}



