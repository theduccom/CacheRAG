#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>

using namespace std;

int main(){
	string s;
	string s1 = "apple";
	string s2 = "peach";
	getline(cin,s);
	for(int i=0;i<s.size();i++){
		if(s.substr(i,5)==s1)
		s.replace(i,5,s2);
		else if(s.substr(i,5)==s2)
		s.replace(i,5,s1);
	}
	printf("%s\n",s.c_str());
}