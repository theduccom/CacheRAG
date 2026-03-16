#include <iostream>
#include <string>
using namespace std;

int set(string str,string a,int loc){
	return str.find(a,loc);
}

string rep(string str,string tar,string rp){
	int loc=0;
	while((loc=set(str,tar,loc))!=string::npos) str.replace(loc,tar.length(),rp);
	return str;
}

int main(){
	string str,a="apple",p="peach",tmp=".....";
	unsigned int loc=0;
	getline(cin,str);
	str = rep(str,a,tmp);
	str = rep(str,p,a);
	str = rep(str,tmp,p);
	cout << str << endl;
	return 0;
}