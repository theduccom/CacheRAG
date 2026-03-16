#include <iostream>
#include <string>
using namespace std;

int main() {
	string s,s1,s2;
	getline(cin,s);
	s2=s1=s;
	while(s1.find("apple")!= std::string::npos){
		s.replace(s1.find("apple"),5,"peach");
		s1.replace(s1.find("apple"),5,"peach");
	}
	while(s2.find("peach")!= std::string::npos){
		s.replace(s2.find("peach"),5,"apple");
		s2.replace(s2.find("peach"),5,"apple");
	}
	cout<<s<<endl;
	return 0;
}