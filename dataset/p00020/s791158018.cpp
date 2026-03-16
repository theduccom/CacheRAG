#include<cstdio>
#include<iostream>

using namespace std;

int main(void) {
	string input;
	int s = 'a' - 'A', i;
	
	getline(cin, input);
	for(i = 0; i < (int)input.size(); i++) {
		if('a' <= input[i] && input[i] <= 'z') { input[i] -= s; }
	}
	cout << input << endl;
	
	return 0;
}