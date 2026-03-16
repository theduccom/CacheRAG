#include<iostream>
#include<string>
using namespace std;
void plusplus(string& s) {
	for (int i = 0; i < s.size(); i++) 
		if (s[i] != ' '&&s[i] != '.') {
			if (s[i] == 'z')s[i] = 'a';
			else s[i]++;
		}
	return;
}
int main() {
	string s;
	while(getline(cin, s)){
	for (int i = 0; i < 26; i++) {
		plusplus(s);
		if ((int)s.find("the") >= 0 || (int)s.find("this") >= 0 || (int)s.find("that") >= 0) break;
	}
	cout << s << endl;
}
	return 0;
}