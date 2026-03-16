#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <cstring>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
 
#define REP(i,n) for(int i=0; i<n; ++i)
#define FOR(i,a,b) for(int i=a; i<=b; ++i)
#define FORR(i,a,b) for (int i=a; i>=b; --i)
 
typedef long long ll;
typedef vector<int> VI;
typedef vector<ll> VL;
typedef vector<VI> VVI;
typedef pair<int,int> P;
typedef pair<ll,ll> PL;

int main() {
    int n, m = 103;
    cin >> n;
    while (n--){
        string sa, sb;
        VI a(m), b(m);
        cin >> sa >> sb;
        REP(i,sa.length()) a[i] = sa[sa.length()-i-1] - '0';
        REP(i,sb.length()) b[i] = sb[sb.length()-i-1] - '0';
        int p = 0;
        REP(i,m){
            a[i] += b[i] + p;
            if (a[i] >= 10){
                a[i] -= 10;
                p = 1;
            }else{
                p = 0;
            }
        }
        int h = 0;
        REP(i,m) if (a[i] > 0) h = i;
        if (h >= 80){
            cout << "overflow" << endl;
        }else{
            FORR(i,h,0) cout << a[i];
            cout << endl;
        }
    }

    return 0;
}