#include <bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;
typedef long long ll;
typedef pair<char, int>P;

int main() {
	float Max; cin >> Max;
	float Min = Max;
	float f;
	while (cin >> f) {
		Max = max(Max, f);
		Min = min(Min, f);
	}
	cout << Max - Min << endl;
	return 0;
}