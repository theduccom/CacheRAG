#include<iostream>
#include<string>
using namespace std;

int main(){

	string str;
	while (getline(cin, str)){
		while (true)
		{
			for (int i = 0; i < str.size(); i++)
			{
				if (str[i] == ' ' || str[i] == '.') continue;

				if (str[i] == 'z'){
					str[i] = 'a';
				}
				else {
					str[i]++;
				}
			}

			if (str.find("the") != -1 || str.find("this") != -1 || str.find("that") != -1)
			{
				cout << str << endl;
				break;
			}
		}
	}
	

	return 0;
}