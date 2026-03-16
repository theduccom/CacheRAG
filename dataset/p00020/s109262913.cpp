#include <iostream>
#include <cstdio>
#include <string>
#include <locale>
using namespace std;

int main(){
	string s;
	getline(cin, s);
	for (int i = 0; i < s.length(); i++){
		printf("%c", toupper(s[i]));
	}
	cout << endl;
	return 0;
}