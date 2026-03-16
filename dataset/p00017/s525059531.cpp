#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	
	while (getline(cin, str)){
		while (1){
			if(str.find("this") != -1 || str.find("the") != -1 || str.find("that") != -1){
           		break;
        	}
		
			for (int i = 0; i < str.size(); i++){
				if (str[i] != ' ' && str[i] != '.'){
					if (str[i] == 'z') str[i] = 'a';
					else str[i]++;
				}
			}
		
		}
		cout << str << endl;
	}
}