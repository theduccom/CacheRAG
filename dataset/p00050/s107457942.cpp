#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
	string tmp;
	string body;
	int pos;
	cin >> body;
	while(cin >> tmp)
	{
		if ((pos = tmp.find("peach"))!=string::npos)
		{
			tmp.erase(pos,5);
			tmp.insert(pos,"apple");
		} else if ((pos =tmp.find("apple"))!=string::npos) {
			tmp.erase(pos,5);
			tmp.insert(pos,"peach");
		}
		body += " " + tmp;
	}
	cout << body << endl;
	return 0;
}