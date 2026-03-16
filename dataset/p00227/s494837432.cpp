#include <bits/stdc++.h>
#define FOR(v, s, t) for(int v = s; v < t; ++v)
using namespace std;

int main(){
	int n, m, min;
	vector< int > p;
	
	while(cin >> n >> m, n){
		p.resize(n);
		FOR(i, 0, n) cin >> p[i];
		
		sort(p.begin(), p.end());
		reverse(p.begin(), p.end());
		
		min = 0;
		FOR(i, 0, n){
			if((i + 1) % m != 0){
				min += p[i];
			}
		}
		
		cout << min << endl;
	}
	
	return 0;
}