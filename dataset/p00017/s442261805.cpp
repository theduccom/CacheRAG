#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string str;
	
	while (getline(cin, str)){
		string res;
		for (int i = 0; i < 26; i++){
			for (int j = 0; j < str.size(); j++){
				if (str[j] != ' ' && str[j] != '.') res += (str[j] -'a' + i ) % 26 + 'a';
				else res += str[j];
			}
//			cout << i + 1 << " " << res << endl;
			if (res.find("this") != -1){
				cout << res << endl;
				break;
			}
			if (res.find("the") != -1){
				cout << res << endl;
				break;
			}
			if (res.find("that") != -1){
				cout << res << endl;
				break;
			}
			res.clear();
		}
	}
	
	return 0;
}