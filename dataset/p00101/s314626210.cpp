#include <iostream>
#include <vector>
#include <stdio.h>
#include <string>
#include <stdlib.h>

using namespace std;

int main(void){
//	FILE* fp_in = freopen("data.txt", "r", stdin);

	int n;
	string s;
	getline(cin, s);
	n = atoi(s.c_str());

	for(int i = 0; i < n; i++) {
		string str;
		getline(cin, str);
		for(int j = 0; j + 6 < str.length(); j++) {
			string sub;
			sub = str.substr(j, 7);
			if( sub == "Hoshino" )
				str[j + 6] = 'a';

			
		}
		cout << str << endl;
	}
	
 
//	while (1){}
	return 0;
}