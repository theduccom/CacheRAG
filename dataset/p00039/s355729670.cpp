#include <iostream>
#include <map>
#include <string>
using namespace std;

map<char, int> data;
int ans;

void parse(string str) {
	ans = 0;
	for (int i=0; i<str.size(); i++) {
		int t1 = data[str[i]];
		int t2 = 0;
		if (i != str.size()-1) t2 = data[str[i+1]];
		if (t1 < t2) {
			ans += t2 - t1;
			i++;
		} else {
			ans += t1;
		}
	}
}

int main() {
	string in;

	data['I'] = 1;
	data['V'] = 5;
	data['X'] = 10;
	data['L'] = 50;
	data['C'] = 100;
	data['D'] = 500;
	data['M'] = 1000;
	
	while (cin >> in, !in.empty()) {
		parse(in);
		cout << ans << endl;
		in.clear();
	}
	return 0;
}