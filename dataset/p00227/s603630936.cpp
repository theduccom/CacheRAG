#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n,m;

void solve()
{
	vector<int> veg(n);
	int ans = 0;
	for(int i = 0; i < n; i++)
		cin >> veg[i];

	sort(veg.begin(), veg.end() );

	for(int i = 1; i <= n; i++){
		int d = veg.back();
		veg.pop_back();
		if(i % m)
			ans += d;
	}
	
	cout << ans << endl;
}


int main(void)
{
	while(cin >> n >> m, n | m){
		solve();
	}

	return 0;
}