#include <iostream>
#define rep2(x,from,to) for(int x=(from);(x)<(to);(x)++)
#define rep(x,to) rep2(x,0,to)
using namespace std;

int main(){
	int n;
	while(cin >> n) {
		if(n==-1) break;
		int ret = 3130;
		n -= 10;
		if(n<=0) {
			cout << ret << endl;
			continue;
		}
		ret -= 1250;
		n -= 10;
		if(n<=0) {
			ret -= 125*n;
			cout << ret << endl;
			continue;
		}
		ret -= 1400;
		n -= 10;
		if(n<=0) {
			ret -= 140*n;
			cout << ret << endl;
			continue;
		}
		ret -= 160*n;
		cout << ret << endl;
	}
}