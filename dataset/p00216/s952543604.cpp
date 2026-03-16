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
    const int m = 4280;
    while(true){
	int n;
	cin >> n;
	if(n==-1) break;
	int a = max(115*n,1150);
	n -= 10;
	if(n>0) a += n * 10;
	n -= 10;
	if(n>0) a += n * 15;
	n -= 10;
	if(n>0) a += n * 20;
	cout << m - a << endl;
    }
    return 0;
}