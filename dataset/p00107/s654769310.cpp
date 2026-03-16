#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for( int i = 0; i < n; i++ )
#define dump(x)  cerr << #x << " = " << (x) << endl;
#define INF 2000000000
#define mod 1000000007
#define INF2 1000000000000000000

double circle (int x, int y) {
    return 1/2.0 * sqrt(x*x + y*y);
}

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int In[3];
    rep(i ,3) cin >> In[i];
    while (In[0] != 0 || In[1] != 0 || In[2] != 0) {
        sort(In, In + 3);
        double r = circle(In[0], In[1]);
        int n; cin >> n;
        for (int i = 0; i < n; i++) {
            int door; cin >> door;
            if (r < door) cout << "OK" << endl;
            else cout << "NA" << endl;
        }
        rep(i ,3) cin >> In[i];
    } 

    return 0;
}