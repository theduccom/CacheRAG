#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;

int main(){
	int n, m;
	while(cin >> n >> m, n || m){
		int price[10010];
		int ans = 0;
		for(int i=1; i <= n; i++)
			cin >> price[i];

		sort(price+1, price+n+1, greater<int>());

		for(int i=1; i <= n; i++){
			if(i % m == 0) continue;
			ans += price[i];
		}
		cout << ans << endl;
	}
}