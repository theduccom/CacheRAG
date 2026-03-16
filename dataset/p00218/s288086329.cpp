#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

#define FOR(i,a,b) for (ll i = (a); i < (b); i++)
#define REP(i,n) FOR(i,0,n)

typedef long long ll;

int main(){
	int n;
	
	while (cin >> n, n){
		REP(i,n){
			int m, e, j;
			
			scanf("%d %d %d", &m, &e, &j);
			
			if (m == 100 || e == 100 || j == 100){
				cout << "A" << endl;
			}
			else if (m+e >= 90*2){
				cout << "A" << endl;
			}
			else if (m+e+j >= 80*3){
				cout << "A" << endl;
			}
			else if (m+e+j >= 70*3){
				cout << "B" << endl;
			}
			else if (m+e+j >= 50*3 && (m >= 80 || e >= 80)){
				cout << "B" << endl;
			}
			else cout << "C" << endl;
		}
	}
	
	return 0;
}