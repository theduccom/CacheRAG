#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
	string s;
	map<char,int> m;
	m['I'] = 1;
	m['V'] = 5;
	m['X'] = 10;
	m['L'] = 50;
	m['C'] = 100;
	m['D'] = 500;
	m['M'] = 1000;
	while( cin >> s ){
		int sum = 0;
		
		while( !s.empty() ){
			for(unsigned int i=0 ; i<s.size() ; i++){
				if( i!=s.size()-1 && m[ s[i] ] < m[ s[i+1] ] ){
					sum += m[ s[i+1] ] - m[ s[i] ];
					s.erase(i,2);
					break;
				}else{
					sum += m[ s[i] ];
					s.erase(i,1);
					break;
				}
			}
		}
		cout << sum << endl;
	}
}