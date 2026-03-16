#include <iostream>
#include <string>
using namespace std;

int main(void){
	int a=0,b=0,o=0,ab=0;
	int tmp;
	string str;
	while(cin >> tmp){
		cin.ignore();
		cin >> str;
		if(str == "A") a++;
		if(str == "B") b++;
		if(str == "O") o++;
		if(str == "AB") ab++;
	}
	cout << a << endl;
	cout << b << endl;
	cout << ab << endl;
	cout << o << endl;
}