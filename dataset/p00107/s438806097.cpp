#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
#define all(x) x.begin(),x.end()
using namespace std;
typedef long long ll;

double lng(int a, int b){
    double res = sqrt(a*a+b*b);
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    double d,w,h;
    int n;
    while(cin >> d >> w >> h){
        if(!d && !w && !h) break;
        cin >> n;
        double l1 = lng(d,w);
        double l2 = lng(w,h);
        double l3 = lng(h,d);
        double l = min( min(l1,l2), l3 );
        rep(i,n){
            double r;
            cin >> r;
            cout << (2.0*r > l ? "OK" : "NA") << endl;
        }
    }
      
    return 0;
}
