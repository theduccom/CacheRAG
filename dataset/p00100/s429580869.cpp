#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); ++i)
#define rrep(i,n) for(int i = 1; i <= (n); ++i)
#define drep(i,n) for(int i = (n)-1; i >= 0; --i)
#define srep(i,s,t) for (int i = s; i < t; ++i)
using namespace std;
typedef long long int ll;
#define dame { puts("-1"); return 0;}
#define yn {puts("Yes");}else{puts("No");}


int main() {
    while(true){
        int n;
        cin >> n;
        if(n==0){
            break;
        }

        ll a[4001]  = {};

        int retu[4000];
        int count = 0;
        int flag[4001] = {};

        rep(i,n){
            int e;
            ll p,q;
            cin >> e >> p >> q;
            a[e] += p*q;
            //cout << a[e];
            if(flag[e]==0){
                retu[count] = e;
                count++;
                flag[e] = 1;
            }
        }
        int f = 0;
        rep(i,count){
            //cout << a[retu[i]];
            if(a[retu[i]]>=1000000){
                cout << retu[i] << endl;
                f = 1;
            }
        }
        if(f==0){
            cout << "NA" << endl;
        }

    }
    return 0;
}
 
 
