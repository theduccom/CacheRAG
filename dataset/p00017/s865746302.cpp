#include<iostream>
#include<string>
using namespace std;

int main() {
	string from;
	while (getline(cin,from)) {
		for (int j = 1; j <= 26; j++) {
			for (int i = 0; i < from.size(); i++) {
				if (from[i] != '.'&&from[i] != ' ') {
					if (from[i] + 1 > 122)from[i] = from[i] + 1 - 26;
					else from[i] = from[i] + 1;
				}
			}
				if ((int)from.find("the") != -1)break;
				if ((int)from.find("this") != -1)break;
				if ((int)from.find("that") != -1)break;
		}
		cout << from << endl;
	}
	return 0;
}