#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define RFOR(i,a,b) for(int i=(b) - 1;i>=(a);i--)
#define REP(i,n) for(int i=0;i<(n);i++)
#define RREP(i,n) for(int i=n-1;i>=0;i--)

#define PB push_back
#define INF INT_MAX/3
#define ALL(a) (a).begin(),(a).end()
#define CLR(a) memset(a,0,sizeof(a))

typedef long long int ll;

using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if(a == 0 &&  c == 0 ) cout << "Close" << endl;
    else if( a == 1 && b == 0 && c == 0) cout << "Close" << endl;
    else cout << "Open" << endl;
    return 0;
}