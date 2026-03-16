#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(){
	string s;
	while(getline(cin, s)){
		set<size_t> replaced;
		size_t p = 0;
		while((p = s.find("apple", p)) != string::npos){
			replaced.insert(p);
			s[p + 0] = 'p';
			s[p + 1] = 'e';
			s[p + 2] = 'a';
			s[p + 3] = 'c';
			s[p + 4] = 'h';
		}
		p = 0;
		while((p = s.find("peach", p)) != string::npos){
			if(replaced.find(p) != replaced.end()){
				++p;
				continue;
			}
			s[p + 0] = 'a';
			s[p + 1] = 'p';
			s[p + 2] = 'p';
			s[p + 3] = 'l';
			s[p + 4] = 'e';
		}
		cout << s << endl;
	}
	return 0;
}