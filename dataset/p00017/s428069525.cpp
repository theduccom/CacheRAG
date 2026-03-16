#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main()
{
	string s;
	while (getline(cin, s)){
		while (true){
			for (int i = 0; i < s.size(); i++){
				if (s[i] == 'z'){
					s[i] = 'a';
				}
				else if (s[i] != ' '&&s[i] != '.'){
					s[i]++;
				}
			}
			if (s.find("the") != -1)break;
			if (s.find("this") != -1)break;
			if (s.find("that") != -1)break;
		}
		cout << s << endl;
	}
}