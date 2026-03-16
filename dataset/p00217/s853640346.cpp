#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define itrep(it, a) for(it = (a).begin(); it != (a).end; it++)
#define all(a) (a).begin(), (a).end()
#define debug(x) cout << "debug " << x << endl;
#define INF (1 << 30)
using namespace std;

int main(){
    int n;
    while(cin >> n,n){
        int p, d1, d2;
        vector< pair<int, int> > vpii;
        rep(i,n){
            cin >> p >> d1 >> d2;
            vpii.push_back(make_pair(d1 + d2, p));
        }
        sort(all(vpii), greater< pair<int, int> >());
        cout << vpii[0].second << ' ' <<  vpii[0].first << endl;
    }
}