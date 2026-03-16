#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstring>
#include <cstdlib>
#include <stack>

using namespace std;

int calc(string s){
	// ©gªÊÉÍÜêÄ¢éêÆAÅ éÆ«Ì
	if(s[0]>='0'&&s[0]<='9'){
		bool f=false;
		for(int i = 0; i < s.size(); i++){
			if(!(s[i]>='0'&&s[i]<='9')){
				f=true;
				break;
			}
		}
		if(!f){
			return atoi(s.c_str());
		}
	}
	else if(s[0]=='('){
		stack<char> sc;
		sc.push('(');
		for(int i = 1; i < s.size(); i++){
			if(s[i]==')')
				sc.pop();
			else if(s[i]=='('){
				sc.push('(');
			}
			if(sc.size()==0){
				if(i==s.size()-1){
					return calc(s.substr(1,s.size()-2));
				}
				else{
					break;
				}
			}
		}
	}
	stack<char> sc;
	// \¶ðÍÆÓ¡ðÍ
	for(int i = s.size()-1; i >= 0; i--){
		// ÊÌÌZqÍ³·é
		if(s[i]=='(')
			sc.pop();
		else if(s[i]==')'){
			sc.push(')');
		}
		else if(s[i]=='+'&&sc.size()==0){
			return calc(s.substr(0,i)) + calc(s.substr(i+1,s.size()-i-1));
		}
		else if(s[i]=='-'&&sc.size()==0){
			return calc(s.substr(0,i)) - calc(s.substr(i+1,s.size()-i-1));
		}
	}

	for(int i = s.size()-1; i >= 0; i--){
		// ÊÌÌZqÍ³·é
		if(s[i]=='(')
			sc.pop();
		else if(s[i]==')'){
			sc.push(')');
		}
		else if(s[i]=='*'&&sc.size()==0){
			return calc(s.substr(0,i)) * calc(s.substr(i+1,s.size()-i-1));
		}
		else if(s[i]=='/'&&sc.size()==0){
			return calc(s.substr(0,i)) / calc(s.substr(i+1,s.size()-i-1));
		}
	}
}

int main(){

	int n;
	cin>>n;
	for(int i = 0; i < n; i++){
		string str;
		cin>>str;
		cout<<calc(str.substr(0,str.size()-1))<<endl;
	}

	return 0;
}