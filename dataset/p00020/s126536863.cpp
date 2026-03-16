#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>
#include <stdlib.h>

using namespace std;

int main(void){
	
	string str, ans;
	getline(cin, str);
	ans = str;
	for(int i = 0; i < str.length(); i++ ) {
		if( str[i] < 'a' || str[i] > 'z' ) continue;
		ans[i] = str[i] - 'a' + 'A';
	}
	cout << ans << endl;
    return 0;
}