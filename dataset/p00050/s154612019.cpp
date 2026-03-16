#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main(){
	char str[1001];

	fgets(str,sizeof(str),stdin);

	for(int i = 0; i < 1000; i++){
		if(str[i] == 'p' && str[i+1] == 'e' && str[i+2] == 'a'
			&& str[i+3] == 'c' && str[i+4] == 'h'){

			str[i] = 'a';
			str[i+1] = 'p';
			str[i+2] = 'p';
			str[i+3] = 'l';
			str[i+4] = 'e';
		}
		else if(str[i] == 'a' && str[i+1] == 'p' && str[i+2] == 'p'
			&& str[i+3] == 'l' && str[i+4] == 'e'){

			str[i] = 'p';
			str[i+1] = 'e';
			str[i+2] = 'a';
			str[i+3] = 'c';
			str[i+4] = 'h';
		}
	}

	cout << str;

	return 0;
}