#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main()
{
	string str;
	while (cin >> str) {
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == '@') {
				int len = str[i + 1] - '0';
				//cout << "len" << len << endl;
				char c = str[i + 2];
				for (int j = 0; j < len; j++) {
					cout << c;
				}
				i += 2;
			}
			else {
				cout << str[i];
			}
			
		}
		cout << endl;
	}
    return 0;
}