#include <iostream>
#include <string>
using namespace std;

int tbl[128];

int main(){
	tbl['I'] = 1;
	tbl['V'] = 5;
	tbl['X'] = 10;
	tbl['L'] = 50;
	tbl['C'] = 100;
	tbl['D'] = 500;
	tbl['M'] = 1000;

	string s;
	while(getline(cin, s)){
		s += '$';
		int u = 0;
		for(int i = 0; i + 1 < s.size(); ++i){
			if(tbl[s[i]] < tbl[s[i+1]]){
				u -= tbl[s[i]];
			}
			else{
				u += tbl[s[i]];
			}
		}
		cout << u << '\n';
	}
}