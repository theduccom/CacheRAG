#include <bits/stdc++.h>
using namespace std;

#define out cout 
#define in cin
#define el endl

#define rep(i, N) for (int i = 0; i < N; i++)
#define ol(N) cout << N << endl

int main()
{
	int a, c = 0;
	string s;
	map<string, vector<int>> m;

	while (in >> s >> a){
		m[s].push_back(a);
	}
	for (auto chie : m) {
		cout << chie.first << '\n';
		sort(chie.second.begin(), chie.second.end());
		rep(i, chie.second.size() - 1) {
			cout << chie.second[i] << " ";
		}
		cout << chie.second[chie.second.size() - 1] << '\n';
	}

	return (0);
}