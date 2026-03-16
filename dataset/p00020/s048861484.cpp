#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <algorithm>
#include <stdlib.h>
#include <vector>

using namespace std;


int main(){

	string str;
	getline(cin, str);

	for(int i=0 ; i<str.size() ; i++){
		if(str[i] >= 'a' && str[i] <= 'z'){
			str[i] = str[i] + 'A' - 'a';
		}
	}
	cout << str << endl;
	return 0;
}