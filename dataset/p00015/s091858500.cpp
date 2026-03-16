#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++){
		string a, b;
		cin >> a >> b;
		if(a.size() < b.size()) swap(a, b);
		reverse(a.begin(), a.end());
		reverse(b.begin(), b.end());
		string ans;
		bool carryover = false;
		for(int j = 0; j < b.size(); j++){
			int num;
			if(carryover) num = (a[j] - '0') + (b[j] - '0') + 1;
			else num = (a[j] - '0') + (b[j] - '0');
			if(num >= 10) carryover = true;
			else carryover = false;
			ans.push_back(num % 10 + '0');
		}
		for(int j = b.size(); j < a.size(); j++){
			int num;
			if(carryover) num = (a[j] - '0') + 1;
			else num = (a[j] - '0');
			if(num >= 10) carryover = true;
			else carryover = false;
			ans.push_back(num % 10 + '0');
		}
		if(carryover) ans.push_back('1');
		reverse(ans.begin(), ans.end());
		if(ans.size() > 80) cout << "overflow" << endl;
		else cout << ans << endl;
	}
	return 0;
}
