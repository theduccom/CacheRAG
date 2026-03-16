#include <iostream>
#include <string>
using namespace std;

int index(char c){
	if(c == 'A') return 0;
	if(c == 'I') return 1;
	if(c == 'V') return 5;
	if(c == 'X') return 10;
	if(c == 'L') return 50;
	if(c == 'C') return 100;
	if(c == 'D') return 500;
	if(c == 'M') return 1000;
}
int main(){
	string s;
	while(cin >> s){
		int total = 0;
		int size = s.size();
		s.push_back('A');
		for(int i = 0; i < size;i++)
		{
			if(index(s[i]) < index(s[i+1])) total -= index(s[i]);
			else total += index(s[i]);
		}
		cout << total << endl;
	}
	return 0;
}