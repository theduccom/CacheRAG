#include <iostream>
#include <iomanip>
#include <algorithm>
#include <map>
#include <string>
#include <cstdio>
#include <cstring>
#include <climits>
#include <vector>
//#include <tuple>
using namespace std;
#define rep(i,n) for(LL i=0;i<n;i++)
#define all(v)	(v).begin(),(v).end()
#define MOD  1000000007
const int INF = INT_MAX;
typedef long long LL;
typedef pair<int, int> pii;
//typedef tuple<int, int> tii;

int main(){
	int w[10] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };
	int n;
	while (cin >> n){
		vector<int> v;
		for (int i = 9; i >= 0; i--){
			if (n >= w[i]){
				v.push_back(w[i]);
				n -= w[i];
			}
		}
		sort(all(v));
		rep(i, v.size()-1){
			cout << v[i] <<" ";
		}
		cout << v[v.size() - 1] << endl;
	}
	return 0;
}