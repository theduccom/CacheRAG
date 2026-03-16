#include<cstdio>
#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
int main() {
	map<string, vector<int> > D;
	string w;
	int n;
	while(cin >> w >> n) {
		D[w].push_back(n);
	}
	map<string, vector<int> >::iterator it = D.begin();
	for(; it != D.end(); it++) {
		cout << it->first << endl;
		int size = it->second.size();
		sort(it->second.begin(),it->second.end());
		for(int i = 0; i < size - 1; i++){
			cout << it->second[i] << " ";
		}
		cout << it->second[size-1] << endl;
	}
	return 0;
}