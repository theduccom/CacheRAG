#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;

int main(){
	int n, m;
	int p[1000];
	
	while(1){
		cin >> n >> m;
		if(n == 0 && m == 0) break;
		for(int i = 0;i < n;i++){
			cin >> p[i];
		}
		int ans = 0;
		sort(p, p + n, greater<int>());
		for(int i = 0;i < n;i++){
			if(i % m == m - 1) continue;
			ans += p[i];
		}
		cout << ans << endl;
	}
	
	return 0;
}