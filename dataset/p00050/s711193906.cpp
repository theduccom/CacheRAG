#include<iostream>
#include<string>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;

int main(){
	string s;
	getline(cin,s);
	rep(i,s.size()-4){
		string str=s.substr(i,5);
		if(str=="apple")s.replace(i,5,"peach");
		else if(str=="peach")s.replace(i,5,"apple");
	}
	cout<<s<<endl;
	return 0;
}