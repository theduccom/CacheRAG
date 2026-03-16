#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	while(getline(cin, s)){
	
		while(s.find("the") == s.npos && s.find("this") == s.npos && s.find("that") == s.npos){
			for(size_t i=0;i<s.size();i++){
				if(s[i]>='a' && s[i]<='y'){
					s[i]++;
				}else if(s[i]=='z'){
					s[i] = 'a';
				}
			}
		}
		//whileを抜けたときにはtheかthisかthatが含まれている
		cout<<s<<endl;
	}
	return 0;
}