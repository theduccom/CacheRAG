#include <iostream>
#include <string>
using namespace std;

int main(){
	int n;
	string str;
	cin >> n;
	getline(cin, str);
	for(int i = 0;i < n;i++){
		getline(cin, str);
		while(str.find("Hoshino") != -1){
			int locate = str.find("Hoshino");
			str[locate + 6] = 'a';
		}
		cout << str << endl;
	}
}