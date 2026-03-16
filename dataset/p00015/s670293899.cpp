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
		reverse(a.begin(),a.end()),reverse(b.begin(),b.end());
		int a_len = a.size(),b_len = b.size();
		int num = max(a_len,b_len),c = 0;
		for(int i = 0; i < num; i++) {
			if(a_len <= i || b_len <= i) c += (b_len <= i ? a[i] : b[i]) - '0';
			else c += a[i] + b[i] - '0' * 2;
			ret += c % 10 + '0';
			c /= 10;
		}
		if(c) ret += c + '0';
		reverse(ret.begin(),ret.end());
		cout << (ret.size() > 80 ? "overflow" : ret) << endl;
	}
	return 0;
}