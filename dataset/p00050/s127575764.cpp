#include <string>
#include <iostream>
using namespace std;
string s;
int main() {
	getline(cin, s);
	for(int i = 0; i < s.size() - 4; i++) {
		string t = s.substr(i, 5);
		if(t == "apple") s.replace(s.begin() + i, s.begin() + i + 5, "peach");
		if(t == "peach") s.replace(s.begin() + i, s.begin() + i + 5, "apple");
	}
	cout << s << endl;
}