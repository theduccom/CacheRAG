#include<iostream>
#include<string>
#include<map>
using namespace std;


int main(){
	map<string,string> res;
	res["1 0 0"]="Close";
	res["0 1 0"]="Close";
	res["1 1 0"]="Open";
	res["0 0 1"]="Open";
	res["0 0 0"]="Close";
	string s;
	getline(cin,s);
	cout<<res[s]<<endl;
	return 0;
}