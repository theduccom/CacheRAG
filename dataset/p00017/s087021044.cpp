#include <iostream>
#include <string>
using namespace std;
string rot(string s, int n){
	for(int i = 0; s[i] != '\0'; i++){
		if(s[i] >= 65 && s[i] <= 90) s[i] = (s[i] - 65 + n) % 26 + 65;
		else if(s[i] >= 97 && s[i] <= 122) s[i] = (s[i] - 97 + n) % 26 + 97;
	}
	return s;
}
// the this that
string text[3] = {"the", "this", "that"};
int main(){
	string line;
	while(getline(cin, line)){
		for(int i = 0; i < 26; i++){
			line = rot(line, 1);
			if(line.find(text[0], 0) != string::npos || line.find(text[1], 0) != string::npos || line.find(text[2], 0) != string::npos){
				cout << line << endl;
				break;
			}
		}
	}
	return 0;
}