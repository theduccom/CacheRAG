#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	for(int i = 0; i<(int)s.size(); i++){
		string::size_type ap = s.find("apple",i);
		string::size_type pe = s.find("peach",i);
		if(ap == string::npos && pe == string::npos){break;}
		else if(ap == string::npos && pe != string::npos){s.replace(pe,5,"apple");i=pe;}
		else if(ap != string::npos && pe == string::npos){s.replace(ap,5,"peach");i=ap;}
		else if(ap<pe){s.replace(ap,5,"peach");i=ap;}
		else if(ap>=pe){s.replace(pe,5,"apple");i=pe;}
	}
	cout <<s<<endl;
	return 0;
}