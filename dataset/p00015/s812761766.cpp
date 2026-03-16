#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	int n, len, car;
	string a, b, ans;
	cin >> n;
	for(int i = 0;i < n;++i){
		car = 0;
		ans = "";
		cin >> a >> b;
		reverse(a.begin(), a.end());
		reverse(b.begin(), b.end());
		len = max(a.length(), b.length());
		for(int i = 0;i < len;++i){
			int x, y, s;
			x = i < a.length() ? a[i] - '0' : 0;
			y = i < b.length() ? b[i] - '0' : 0;
			s = x + y + car;
			car = s / 10;
			ans += (s % 10 + '0');
		}
		if(car != 0) ans += (car + '0');
		if(ans.length() <= 80){
			reverse(ans.begin(), ans.end());
			cout << ans << endl;
		}
		else{
			cout << "overflow" << endl;
		}
	}
	return 0;
}