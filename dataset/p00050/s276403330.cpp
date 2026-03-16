#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<string> v;
	string str;
	while (cin >> str) {
		v.push_back(str);
	}
	vector<string>::iterator it = v.begin();
	int ifs = 1, loc;
	while (it != v.end()) {
		if (ifs == 0)
			cout << " ";
		if ((loc = it->find("apple", 0)) != string::npos)
			it->replace(loc, 5, "peach");
		else if ((loc = it->find("peach", 0)) != string::npos)
			it->replace(loc, 5, "apple");
		cout << *it;
		ifs = 0;
		it++;
	}
	cout << endl;
	return 0;
}