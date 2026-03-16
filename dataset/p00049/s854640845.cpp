#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main(){
	int hito[101] = {0};
	int a = 0,b = 0,ab = 0,o = 0;
	string s;

	for(int i = 1; i <= 101; i++){

		scanf("%d,",&hito[i]);
		cin >> s;

		if(hito[i] == 0) break;

		else if(s == "A"){
			a++;
		}else if(s == "B"){
			b++;
		}else if(s == "AB"){
			ab++;
		}else if(s == "O"){
			o++;
		}
	}

	cout << a << endl;
	cout << b << endl;
	cout << ab << endl;
	cout << o << endl;

	return 0;
}