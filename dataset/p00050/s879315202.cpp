#include<iostream>
#include<string>
using namespace std;


int main() {
	string str;
	getline(cin, str);
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == 'a' && str.substr(i + 1, 4) == "pple")str.replace(i, 5, "peach");
		else if (str[i] == 'p'&&str.substr(i + 1, 4) == "each")str.replace(i, 5, "apple");
	}
	cout << str << endl;
}
