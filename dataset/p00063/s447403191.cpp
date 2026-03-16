#include <iostream>
#include <string>
using namespace std;

string str;
int res = 0;

void solve() {
	for (int i = 0; i < str.size(); i++) {
		if (str[i] != str[str.size()-1-i]) {
			return;
		}
	}
	res++;
}

int main(int argc, const char *argv[]) {
	while (cin>>str) {
		solve();
	}
	cout<<res<<endl;
	return 0;
}