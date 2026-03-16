#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

#define FOR(i,a,b) for (ll i = (a); i < (b); i++)
#define REP(i,n) FOR(i,0,n)

typedef long long ll;

int p[10000];
int d[10000];

int main(){
	int n;
	
	while (cin >> n, n){
		int ma = 0, ma_d = 0;
		REP(i,n){
			int d2;
			scanf("%d %d %d", &p[i], &d[i], &d2);
			d[i] += d2;
			
			if (ma_d < d[i]){
				ma = i;
				ma_d = d[i];
			}
		}
		
		cout << p[ma] << " " << ma_d << endl;
	}
	
	return 0;
}