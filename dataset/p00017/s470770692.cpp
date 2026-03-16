#include <iostream>
#include <string>

using namespace std;

string str;

bool caesar()
{
	bool flag = false;

	for (int i=0; i<(int)str.size() - 2; i++)
	{
		if(str[i] == 't' && str[i+1] == 'h') {
			if(str[i+2] == 'e' && (str[i+3] == ' ' || str[i+3] == '\0' || str[i+3] == '.')) {
				flag = true;
				break;
			}
			if(str[i+2] == 'i' && str[i+3] == 's' && (str[i+4] == ' ' || str[i+4] == '\0' || str[i+4] == '.')) {
				flag = true;
				break;
			}
			if(str[i+2] == 'a' && str[i+3] == 't' && (str[i+4] == ' ' || str[i+4] == '\0' || str[i+4] == '.')) {
				flag = true;
				break;
			}
		}
	}

	return flag;
}


int main()
{
	while(getline(cin, str))
	{
		for (int i=0; i<26; i++)	//0〜25文字ずれるまで繰り返す
		{
			if(caesar()) {
				cout << str << endl;
			}

			//cout << str << endl;	//Debug

			for (int j=0; str[j] != '\0'; j++) {
				if(str[j] != ' ' && str[j] != '.') {
					if(str[j] == 'z') {
						str[j] = 'a';
					}
					else {
						str[j]++;
					}
				}
			}
		}
	}

	return 0;
}