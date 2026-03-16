#include <iostream>
#include <string>
using namespace std;
int main(){
	string s;
	while (getline(cin, s), !cin.eof()){
		while (1){
			size_t p = s.find("@");
			if (p == string::npos)break;
			s.replace(p, 3, string(int(s[p + 1] - '0'), s[p + 2]));
		}
		cout << s << "\n";
	}
}