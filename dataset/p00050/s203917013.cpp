#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	while(getline(cin,s)){
		string ans="";
		for(string::size_type i=0; i<s.size(); i++){
			if(s.substr(i,5) == "peach"){
				ans+="apple";
				i+=4;
			}
			else if(s.substr(i,5) == "apple"){
				ans+="peach";
				i+=4;
			}
			else ans+=s[i];
		}
		cout << ans << endl;
	}
	return 0;
}