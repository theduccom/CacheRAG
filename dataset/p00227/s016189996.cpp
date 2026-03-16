#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, m;
	
	while(1){
		cin >> n >> m;
		if(n == 0 && m == 0)
			break;
			
		int p[1000];
		//fill_n(p, 1000, 0);
		for(int i = 0; i < n; ++i)
			cin >> p[i];
		sort(p, p + n, greater<int>());
		int ans = 0;
		for(int i = 0; i < n; i += m){
			for(int j = i; j < n && j < i + m; ++j)
				ans += p[j];
			if(i + m <= n)
				ans -= p[i + m - 1];
		}
		
		cout << ans << endl;
	}
	return 0;
}