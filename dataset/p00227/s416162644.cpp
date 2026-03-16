#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main(){
	int i,n,m,a,price[1000],count,out;
	while(cin >> n >> m && (n != 0 && m != 0)){
		count = out = 0;
		for(i = 0;i < n;i++){
			cin >> a;
			price[i] = a;
		}
		sort(price,price+n,greater<int>());
		for(i = 0;i < n;i++){
			out += price[i];
			count++;
			if(count == m) {
				out -= price[i];
				count = 0;
			}
		}
		cout << out << endl;
	}
	return 0;
}