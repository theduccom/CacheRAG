#include <iostream>
#include <string>
using namespace std;

int main(){
	int c = 0;
	string s;
	while(getline(cin, s)){
		if(s == string(s.rbegin(), s.rend())){
			++c;
		}
	}
	cout << c << endl;
}