#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
#define rep2(x,from,to) for(int x = (from); x < (to); ++(x))
#define rep(x,to) rep2(x,0,to) 
int main() {
	int n;
	while(cin >> n) {
		vector<int> v;
		rep(i,10) {
			if(1<<i & n) v.push_back(1<<i);
		}
		cout << v[0];
		rep2(i,1,v.size()) {
			cout << " " << v[i];
		}
		cout << endl;
	}
	return 0;
}