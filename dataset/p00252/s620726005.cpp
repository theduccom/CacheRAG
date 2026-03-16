#include<bits/stdc++.h>

using namespace std;

int main() {
	int b;
	string str;
	stringstream ss;

	str = "";
	for (int i = 0; i < 3; ++i) {
		cin >> b;
		ss << b;
	}
	ss >> str;
	//cout << str << endl;
	if (str == "110" || str == "001") {
		cout << "Open" << endl;
	}
	else {
		cout << "Close" << endl;
	}

	return 0;
}

