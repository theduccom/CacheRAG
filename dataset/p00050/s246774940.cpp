#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
	string s, s1 = "apple", s2 = "peach";
	vector<int> applePos, peachPos;
	getline(cin, s);
	int pos = 0;
	while(s.find(s1, pos) != -1) {
		pos = s.find(s1, pos);
		applePos.push_back(pos);
		pos += s1.length();
	}
	pos = 0; 
	while(s.find(s2, pos) != -1) {
		pos = s.find(s2, pos);
		peachPos.push_back(pos);
		pos += s2.length();
	} 
	for (int i = 0; i < applePos.size(); i++) {
		s.replace(applePos[i], s1.length(), s2);
	}
	for (int i = 0; i < peachPos.size(); i++) {
		s.replace(peachPos[i], s2.length(), s1);
	}
	cout << s << endl;
	return 0;
}
