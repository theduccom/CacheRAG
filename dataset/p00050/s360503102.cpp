#include <iostream>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	int pos=0;
	while(s.find("apple",pos)!=-1||s.find("peach",pos)!=-1){
		int a = s.find("apple",pos);
		int b = s.find("peach",pos);
		if(a==-1)a=s.length();
		if(b==-1)b=s.length();
		if(a<b) s=s.substr(0,a)+"peach"+s.substr(a+5);
		else s=s.substr(0,b)+"apple"+s.substr(b+5);
		pos=((a<b)?a:b)+5;
	}
	cout<<s<<endl;
	return 0;
}