#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	string s;
	int n; cin >> n;
	getline(cin, s);
	for (int j = 0; j < n; j++){
		getline(cin, s);
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == 'H'&&s[i + 1] == 'o'&&s[i + 2] == 's'&&s[i + 3] == 'h'&&s[i + 4] == 'i'&&s[i + 5] == 'n'&&s[i + 6] == 'o') {
				cout << "Hoshina";
				i += 6;
			}
			else cout << s[i];
		}
		cout << endl;
	}
	return 0;
}