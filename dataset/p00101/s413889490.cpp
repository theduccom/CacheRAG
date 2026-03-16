#include<iostream>
#include<string>
using namespace std;

int main() {
	int n;
	cin >> n;
	getchar();
	for (int i = 0;i < n;i++) {
		string s;
		getline(cin, s);
		int a = s.size();

		if (a >= 7) {
			for (int j = 0;j < a - 6;j++) {
				string sb;
				sb = s.substr(j, 7);
				if (sb == "Hoshino") {
					s.replace(j, 7, "Hoshina");
				}
			}
		}
		cout << s << endl;
	}
	return 0;
}