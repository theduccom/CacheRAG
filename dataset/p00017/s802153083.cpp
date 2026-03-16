#define _USE_MATH_DEFINES
#include <iostream>
#include <queue>
#include <vector>
#include <math.h>
#include <algorithm>
#include <iomanip>
#include <string>
#include <stack>
using namespace std;

int main(){
	string s;
	while(getline(cin, s)) {
		while (s.find("the") == string::npos && s.find("this") == string::npos && s.find("that") == string::npos) {
			for (int i = 0; i < s.length(); ++i) {
				if ('a' <= s[i] && s[i] <= 'z') {
					int c;
					c = (s[i] - 'a' + 1) % ('z' - 'a' + 1);
					s[i] = c + 'a';
				}
			}
		}
		cout << s << endl;
	}
	return 0;
}