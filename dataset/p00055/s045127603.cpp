#include <bits/stdc++.h>
#define INF 114514810
#define FOR(i, r, n) for(int i=(r); i<(n); i++) 
#define REP(i, n) FOR(i, (0), n)

using namespace std;

double a[12], sum = 0;

int main(){
	while (cin >> a[0]){
		FOR(i, 1, 10){
			if (!(i % 2)) a[i] = a[i - 1] / 3;
			else a[i] = a[i - 1] * 2;
		}
		REP(i, 10) sum += a[i];
		cout.precision(10);
		cout << sum << endl;
		sum = 0;
	}
}