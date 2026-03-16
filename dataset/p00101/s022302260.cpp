#include<iostream>
#include<string>
using namespace std;

int main(){
	string str;
	int n;
	cin >> n;
	getline(cin, str);
	for (int i = 0; i < n; i++) {
		getline(cin, str);
		for (int j = 0; j < int(str.size()) - 6; j++) {
			if (str.substr(j, 7) == "Hoshino")str.replace(j, 7, "Hoshina");
		}
		cout << str << endl;
	}
}
