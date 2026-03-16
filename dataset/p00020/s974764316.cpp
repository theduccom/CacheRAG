#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <stack>
using namespace std;

int main(){
	string s;
	getline(cin, s);
	int i = 0;
	while(s[i] != '\0'){
		if('a' <= s[i] && s[i] <= 'z'){
			s[i] += 'A' - 'a';
		}
		i++;
	}
	cout << s << endl;
}
