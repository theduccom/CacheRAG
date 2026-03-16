#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int n;
	string a,b;
	cin >> n;
	while(n--) {
		cin >> a >> b;
		string ret = "";
		reverse(a.begin(),a.end());
		reverse(b.begin(),b.end());
		int a_len = a.size(),b_len = b.size();
		int num = max(a_len,b_len),carry = 0,v;
		char tmp[1];
		for(int i = 0; i < num; i++) {
			if(a_len <= i || b_len <= i) v = carry + (b_len <= i ? a[i] : b[i]) - '0';
			else v = carry + a[i] + b[i] - '0' * 2;
			carry = v / 10;
			sprintf(tmp,"%d",v % 10);
			ret += tmp;
		}
		sprintf(tmp,"%d",carry);
		if(carry != 0) ret += tmp;
		reverse(ret.begin(),ret.end());
		cout << (ret.size() > 80 ? "overflow" : ret) << endl;
	}
	return 0;
}