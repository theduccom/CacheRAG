#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	string s;
	getline(cin, s);
	for (int i = 0; i < s.size(); i++){
		if (s[i] == 'a'&&s[i + 1] == 'p'&&s[i + 2] == 'p'&&s[i + 3] == 'l'&&s[i + 4] == 'e') {
			cout << "peach";
			i += 4;
		}
		else if (s[i] == 'p'&&s[i + 1] == 'e'&&s[i + 2] == 'a'&&s[i + 3] == 'c'&&s[i + 4] == 'h'){
			cout << "apple";
			i += 4;
		}
		else cout << s[i];
	}
	cout << endl;
	return 0;
}