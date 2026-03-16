#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) for(int i=0;i<(n);i++)
#define VS vector<string>
#define ll long long int
int main(void) {
    int a;
    bool p[10];
    int w[10] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
    while(cin >> a) {
        REP(i,10) p[i] = false;
        for(int i=9;i>=0;i--) {
            if(a-w[i] >= 0) {
                p[i] = true;
                a = a-w[i];
            } else {
                p[i] = false;
            }
        }
        int k;
        REP(i,10) {
            if(p[i]) k = i;
        }
        REP(i,10) {
            if(p[i]) {                                                                               
                cout << w[i];
                if(i != k) cout << " ";
            }

            if(i == k) cout << endl;
        }
    }
}