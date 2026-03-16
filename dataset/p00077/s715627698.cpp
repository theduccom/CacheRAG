#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	while (getline(cin,s)) {
		int a = s.size();
		string ans;
		
		for (int i = 0;i < a;i++) {
			if (s[i] == '@') {
				char sa = s[i + 1];
				for (int j = 0;j < sa - '0';j++) {ans.push_back(s[i + 2]);}
				i += 2;
			}
			else ans.push_back(s[i]);
		}
		cout << ans << endl;
	}
	return 0;
}