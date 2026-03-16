#include <iostream>
#include <algorithm>
#include <functional>
#define rep2(x,from,to) for(int x=(from);(x)<(to);(x)++)
#define rep(x,to) rep2(x,0,to)
using namespace std;
int main(){
	int m,n,p;
	while(cin >> m >> n, (m||n)) {
		int p[10000];
		rep(i,m) {
			cin >> p[i];
		}
		sort(p,p+m,greater<int>());
		int sum = 0;
		rep(i,m) {
			if(i%n!=n-1) sum += p[i];
		}
		cout << sum << endl;
	}
}