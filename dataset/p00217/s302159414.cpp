#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#define rep2(x,from,to) for(int x=(from);(x)<(to);(x)++)
#define rep(x,to) rep2(x,0,to)
using namespace std;
int main(){
	int n, d1, d2;
	while(cin >> n, n) {
		vector<pair<int, int> > v;
		rep(i,n) {
			pair<int, int> p;
			cin >> p.second >> d1 >> d2;
			p.first = d1 + d2;
			v.push_back(p);
		}
		sort(v.begin(), v.end());
		cout << v[v.size()-1].second << " " << v[v.size()-1].first << endl;
	}
}