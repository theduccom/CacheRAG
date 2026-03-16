#include <iostream>
#define rep2(x,from,to) for(int x=(from);(x)<(to);(x)++)
#define rep(x,to) rep2(x,0,to)
using namespace std;
int main(){
	int n, m, e, j;
	while(cin >> n, n) {
		rep(i,n) {
			cin >> m >> e >> j;
			int t = m+e+j;
			if(m==100||e==100||j==100||m+e>=180||t>=240) cout << "A" << endl;
			else if(t>=210||t>=150&&(m>=80||e>=80)) cout << "B" << endl;
			else cout << "C" << endl;
		}
	}
}