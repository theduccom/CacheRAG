#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main(){

	char s[200];
	string str;

	fgets(s,200,stdin);
	
	str = s;

	for(int i = 0; i < str.size(); i++){
		cout << (char) toupper(s[i]) ;
	}

	return 0;
}