#include <iostream>
#include <string>

using namespace std;

int main(){
	int i, mozisu;
	string str;

	getline(cin, str);

	mozisu = str.size();

	for(i = 0; i < mozisu; i++){
		if(str[i] == 'a' && str[i + 1] == 'p' && str[i + 2] == 'p' && str[i + 3] == 'l' && str[i + 4] == 'e'){
			str[i] = 'p';
			str[i + 1] = 'e';
			str[i + 2] = 'a';
			str[i + 3] = 'c';
			str[i + 4] = 'h';
		}

		else if(str[i] == 'p' && str[i + 1] == 'e' && str[i + 2] == 'a' && str[i + 3] == 'c' && str[i + 4] == 'h'){
			str[i] = 'a';
			str[i + 1] = 'p';
			str[i + 2] = 'p';
			str[i + 3] = 'l';
			str[i + 4] = 'e';
		}
	}

	cout << str << endl;

	return 0;
}