#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		string a, b;
		cin >> a >> b;
		reverse(a.begin(), a.end());
		reverse(b.begin(), b.end());
		while(a.size() < 110) a += "0";
		while(b.size() < 110) b += "0";
		int carry = 0;
		string res = "";
		for(int i = 0; i< a.size(); i++) {
			res   += ((a[i] - '0') + (b[i] - '0') + carry) % 10 + '0';
			carry  = ((a[i] - '0') + (b[i] - '0') + carry) / 10;
		}
		while(res.size() > 1 && *(res.end()-1) == '0') res.erase(res.end()-1);
		reverse(res.begin(), res.end());
		if(res.size() > 80)
			cout << "overflow" << endl;
		else
			cout << res << endl;
	}
}