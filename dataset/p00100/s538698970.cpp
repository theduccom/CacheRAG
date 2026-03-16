#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int n;
	while (cin >> n){
		if (n == 0)return 0;
		long long y[4000] = { 0 };
		vector<int>l;
		for (int i = 0; i < n; i++){
			int a;
			long long b, c;
			cin >> a >> b >> c;
			y[a] += b * c;
			if (find(l.begin(),l.end(), a) == l.end())l.push_back(a);
		}
		vector<int>ll;
		for (long long i: l) {
			if (y[i] >= 1000000)ll.push_back(i);
		}
		sort (l.begin(), l.end());
		if (ll.size() == 0)cout << "NA" << endl;
		else for (int i:ll){
			cout << i << endl;
		}
	}
}