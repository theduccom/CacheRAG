#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int roman2bin(const string &s){
	int result = 0, maxdig = 0;
	for(int i = s.size() - 1; i >= 0; --i){
		int dig = 0;
		switch(s[i]){
			case 'I': dig =    1; break;
			case 'V': dig =    5; break;
			case 'X': dig =   10; break;
			case 'L': dig =   50; break;
			case 'C': dig =  100; break;
			case 'D': dig =  500; break;
			case 'M': dig = 1000; break;
		}
		if(dig >= maxdig){
			result += dig;
			maxdig = dig;
		}else{
			result -= dig;
		}
	}
	return result;
}

int main(){
	string s;
	while(cin >> s){
		cout << roman2bin(s) << endl;
	}
	return 0;
}