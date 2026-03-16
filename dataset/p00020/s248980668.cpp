#include<stdio.h>
#include<iostream>
#include<math.h>
#include<algorithm>
#include<string>
#define pi 3.14159
using namespace std;


int main() {
	string str;
	getline(cin, str);
	for (int i = 0; i < str.size(); i++) {
		if(str[i] != '.' && str[i] != ' '){
			str[i] = str[i] - 'a' + 'A';
		}
	}
	cout << str <<endl;

	return 0;
}