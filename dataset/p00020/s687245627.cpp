#include <iostream>
#include <string>

using namespace std;

int main(){
	string str;

	getline(cin, str);

	for (int i = 0; str[i] != '\0'; i++){
		if (str[i] >= 'a' && str[i] <= 'z'){
			str[i] -= 0x20;
		}
	}

	cout << str << endl;
}