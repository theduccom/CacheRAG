#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <cfloat>
#include <cmath>
#include <string>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)
#define all(v) (v).begin(),(v).end()
#define INF INT_MAX
#define BINF DBL_MAX

int main(){
	int n;
	cin >> n;
	rep(t, n){
		vector<int> v;
		string s;
		int mx = 0, mn = 0;
		cin >> s;
		rep(i, 8){
			int x = s[i] - '0';
			v.push_back(x);
		}
		sort(all(v));
		for (int i = 0; i < 8; i++){
			mx += v[i] * (int)pow(10, i);
		}
		for (int i = 0; i < 8; i++){
			mn += v[i] * (int)pow(10, 7 - i);
		}
		cout << mx - mn << endl;
	}
	return 0;
}