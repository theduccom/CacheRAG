#include<cstdio>
#include<iostream>
#include<algorithm>
#include<string>
#include<queue>
#include<vector>
#include<functional>
#include<cmath>
#include<map>
#include<stack>
#include<set>
#include<numeric>

using namespace std;
typedef long long ll;

int main()
{
	int w;
	while (1) {
		cin >> w;
		if (w == -1)break;
		int ans = 0;
		
		ans += 1150;
		w -= 10;
		if (w > 0) { ans += 125 * min(w, 10); w -= 10; }
		if (w > 0) { ans += 140 * min(w, 10); w -= 10; }
		if (w > 0) ans += 160 * w;
		
		cout << 4280 - ans << endl;
	}
	return 0;
}