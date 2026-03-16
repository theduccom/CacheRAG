#include <string>
#include <iostream>
#include <map>
#include <cstdio>
 
using namespace std;
 
int main(){
    string s;
	map<char, int> m;
	m['I'] = 1;
	m['V'] = 5;
	m['X'] = 10;
	m['L'] = 50;
	m['C'] = 100;
	m['D'] = 500;
	m['M'] = 1000;
 
    while(cin >> s){
		int sum = 0;
		s += 'I';
		for(int i = 0; i < s.size()-1; i++){
			if(m[s[i+1]] > m[s[i]]) sum-=m[s[i]];
			else sum+=m[s[i]];
		}
		cout << sum << endl;
	}
 
 
    return 0;
}