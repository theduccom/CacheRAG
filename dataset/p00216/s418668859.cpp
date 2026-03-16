#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

#define FOR(i,a,b) for (ll i = (a); i < (b); i++)
#define REP(i,n) FOR(i,0,n)

typedef long long ll;

int main(){
	int w;
	
	while (scanf("%d", &w), w != -1){
		int ans = 1150;
		
		if (w > 10 && w <= 20){
			ans += (w-10) * 125;
		}
		else if (w > 20 && w <= 30){
			ans += (w-20) * 140 + 1250;
		}
		else if (w > 30) {
			ans += (w-30) * 160 + 1250 + 1400;
		}
		
		cout << 4280 - ans << endl;
	}	
	return 0;
}