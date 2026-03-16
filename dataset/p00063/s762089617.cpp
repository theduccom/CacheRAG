#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
	
	int c=0;
	string s, t;

	while(cin >> s) {
		t=s;
		reverse(t.begin(), t.end());
		s==t ? c++ : c=c ;
	}

	cout << c << endl;

	return 0;

}