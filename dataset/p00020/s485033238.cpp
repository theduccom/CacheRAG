#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <cstring>
using namespace std;

int main() {
	string str; //文字列
	getline(cin,str);

	for(int i=0;i<=str.size();i++)
		str[i]=toupper(str[i]);
	
	cout << str << endl;
	return 0;
}
