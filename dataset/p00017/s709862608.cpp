#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

char name[] = {
	'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
	'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
	'u', 'v', 'w', 'x', 'y', 'z', '.'
};

int index(char c){
	if(c == '.') return 26;
	return ((int)c - 97);
}

char change(char c, int i){
	if(c == '.') return '.';
	if(c == ' ') return ' ';
	return name[(index(c) + i) % 26];
}

char rchange(char c, int i){
	if(c == '.') return '.';
	if(c == ' ') return ' ';
	return name[(index(c) + 26 - i) % 26];
}

bool search(string s, const string& t, int i){
	string t2;
	for(string::const_iterator iter = t.begin();
		iter != t.end(); iter++)
	{
		t2.push_back(rchange(*iter,i));
	}
	string::const_iterator it = search(s.begin(), s.end(), t2.begin(), t2.end());
	if(it != s.end()){
		if(it == s.begin() || it[-1] == ' ')
			if(it + t2.size() == s.end() || (it[t2.size()] == ' ' || it[t2.size()]))
				return true;
	}
	return false;
}

int main(){
	string s;
	const string t1("the"), t2("this"), t3("that");
	while(getline(cin, s)){
		int i = 0;
		for(; i < 26; i++){
			if(search(s, t1,i) || search(s, t2, i) || search(s, t3, i))
				break;
		}
		for(string::const_iterator it = s.begin();
			it != s.end(); it++)
		{
			cout << change(*it, i);
		}
		cout << endl;
	}
	return 0;
}