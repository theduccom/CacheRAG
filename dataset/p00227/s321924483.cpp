#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int price[1010];

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int n, m;
	while(cin >> n >> m && n != 0 && m != 0){
	
		for(int i = 0; i < n; ++i){
			cin >> price[i];
		}
		
		sort(price, price + n, greater<int>());
		
		int ans = 0;
		/*int s = 0;
		while(s < n){
			int sum = 0;
			for(int i = s; i < s + m - 1 && i < n - 1; ++i){
			   sum	+= price[i];
			}
			++s;
			ans += sum;
		}*/
		/*if(m == 1){
			for(int i = 0; i < n; ++i){
				ans += price[i];
			}
			cout << ans << endl;
			return 0;
		}*/
	
		for(int i = 0; i < n; ++i){
			if((i + 1) % m != 0){
				ans += price[i];
			}
		}
		cout << ans << endl;
	}
	return 0;
}