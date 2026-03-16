#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	int count = 0;
	string s;
	while(getline(cin, s)){
		if(equal(s.begin(), s.end(), s.rbegin())) count++;
	}
	cout << count << endl;
	return 0;
}