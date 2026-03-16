#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main() {

	string str;
	int a = 0;
	int i[1000] = {0};
	int j[1000] = {0};

	getline(cin,str);

	while(1) {
		a = str.find("peach",a);
		if(a == -1) {
			break;
		}
		i[a] = 1;
		a = a + 5;
		
	}

	a = 0;

	while(1) {
		a = str.find("apple",a);
		if(a == -1) {
			break;
		}
		j[a] = 1;
		a = a + 5;
	}

	for (int k = 0; k < str.size(); k++) {
		if (i[k] == 1) {
			cout << "apple";
			k = k + 4;
		}

		else if (j[k] == 1) {
			cout << "peach";
			k = k + 4;
		} 

		else {
			cout << str.substr(k,1);
		}
	}

	cout << endl;

	return 0;
}