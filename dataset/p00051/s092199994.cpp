#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(void){

	string s;

	int n;
	cin >> n;
	for( int i = 0; i < n; i++ ) {
		cin >> s;
		string maxstr, minstr;
		char ch[8];
		for( int j = 0; j < 8; j++ )
			ch[j] = s[j];
		sort( ch, ch + 8 );
		for( int j = 0; j < 8; j++ ) {
			maxstr += ch[7-j];
			minstr += ch[j];
		}
		int max, min;
		max = atoi(maxstr.c_str());
		min = atoi(minstr.c_str());
		cout << max - min << endl;
	}

    return 0;
}