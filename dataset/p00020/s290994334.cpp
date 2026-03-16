#include<iostream>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	for(int i=0;i<s.size();i++){
		if(s[i]>=97&&s[i]<=122){
			s[i]-=32;
		}
	}
	cout<<s<<endl;
	return 0;
}
