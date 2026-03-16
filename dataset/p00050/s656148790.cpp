#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<string>
#include<vector>
#include<math.h>
#include<queue>
#include<algorithm>
#include<functional>

using namespace std;


string str;

void input(){

}

int main(void) {
	int i = 0;
	while (cin >> str) {
		if (i != 0) {
			cout << " ";
		}
		i++;
		for (int i = 0; i < str.size(); i++) {
			if (str.substr(i, 5) == "apple") {
				cout << "peach";
				i += 4;
			}
			else {
				if (str.substr(i, 5) == "peach") {
					cout << "apple";
					i += 4;
				}
				else {
					cout << str[i];
				}
			}
		}
	}


	cout << endl;
	return 0;
}