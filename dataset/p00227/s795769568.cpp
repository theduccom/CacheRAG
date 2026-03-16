#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	vector<int>l;
	int n, m;
	while (cin >> n >> m){
		if (n == 0 && m == 0)break;
		int k[1001];
		for (int i = 0; i < n; i++){
			cin >> k[i];
		}
		sort(k, k + n);
		int sum = 0;
		for (int i = 0; i < n; i++)
			if (n % m != i % m)sum += k[i];
		l.push_back(sum);
	}
	for (int i : l) {
		cout << i << endl;
	}
	char c;
	cin >> c;
}