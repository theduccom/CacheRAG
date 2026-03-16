#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	string sa;
	getline(cin, sa);
	int z = sa.size();
	for (int i = 0; i < z - 4; i++) {
		string sb = sa.substr(i, 5);
		if (sb == "apple") {
			sa.replace(i, 5, "peach");
		}
		if (sb == "peach") {
			sa.replace(i,5, "apple");
		}
	}
	cout << sa << endl;
	return 0;
}