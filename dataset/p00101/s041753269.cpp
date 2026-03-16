
#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++) {
		string s;
		getline(cin, s);
		string from = "Hoshino";
		string to = "Hoshina";
		auto pos = s.find(from);
		while(pos != string::npos) {
			s.replace(pos, from.size(), to);
			pos = s.find(from, pos + to.size());
		}
		cout << s << endl;
	}
}