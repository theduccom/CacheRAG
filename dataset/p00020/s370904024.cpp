#include<iostream>
#include<cctype>
#include<string>
using namespace std;
int main(){
	string str;
	getline(cin, str);
	int str_size = str.size();
	for(int i=0;i<str_size;i++){
		if(islower(str[i]))
			str[i] = toupper(str[i]);
	}
	cout << str << endl;
	return 0;
}