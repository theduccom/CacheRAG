#include <map>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
string S[100], T[100]; int val, cnt, size_;
map<string, vector<int> > M;
int main() {
	while(cin >> S[cnt++]) {
		scanf("%d", &val);
		M[S[cnt - 1]].push_back(val);
	}
	sort(S, S + cnt);
	T[size_++] = S[0];
	for(int i = 1; i < cnt; i++) {
		if(S[i - 1] != S[i]) {
			T[size_++] = S[i];
		}
	}
	for(int i = 1; i < size_; i++) {
		printf("%s\n", T[i].c_str());
		sort(M[T[i]].begin(), M[T[i]].end());
		for(int j = 0; j < M[T[i]].size(); j++) {
			if(j) printf(" ");
			printf("%d", M[T[i]][j]);
		}
		printf("\n");
	}
	return 0;
}