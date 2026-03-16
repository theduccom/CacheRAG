#include <iostream>
#include <string>
using namespace std;
int main(){
	string str;
	int c,i;
	getline(cin,str);
	for(i=0;i<str.size();i++){
		cout << (char)toupper(str[i]);
	}
	cout << endl;
	return 0;
}