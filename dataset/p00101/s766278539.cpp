#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

int main(){
	int n;
	std::cin >> n;cin.get( );
	for(int i=0;i<n;i++){
		string s;
		getline(cin, s);
		for(int j=6;j<s.size();j++){
			if(s.substr(j-6,7)=="Hoshino"){
				s.at(j)='a';
			}
		}
		cout << s << endl;
	}
	return 0;
}