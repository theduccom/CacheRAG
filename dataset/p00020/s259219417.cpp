#include<iostream>
#include<string>
#include<algorithm>
#include<cctype>
using namespace std;

char Toupper(char);

int main(){

	char c;
	string str;
	
	getline(cin, str);

	transform(str.begin(), str.end(), str.begin(), Toupper);
	
	cout << str << endl;

	return 0;
}

char Toupper(char c){

	return toupper((int)c);
	
}