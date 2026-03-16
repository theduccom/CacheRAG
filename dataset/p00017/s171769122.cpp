#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){
	string a;
	while (getline(cin, a)){
		for (int i = 0; i < 26; i++){
			if (a.find("the") != string::npos || a.find("this") != string::npos || a.find("that") != string::npos){
				cout << a << endl;
			}

			for (int j = 0; j < a.size(); j++){
				if (a[j] == ' '){
					continue;
				}
				else if (a[j] == 'z'){
					a[j] = 'a';
				}
				else if (a[j] == '.'){
					continue;
				}
				else {
					a[j]++;
				}
			}

		}

	}

	return 0;
}
