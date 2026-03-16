#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
	string s;
	while(getline(cin,s)){
		for(size_t i=0;i<s.size();i++){
			s[i] = toupper(s[i]);
		}
		
		cout<<s<<endl;
	}
	return 0;
}