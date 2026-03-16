#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <cstdio>
#include <string>
#include <cmath>
#include <cfloat>
#include <map>
using namespace std;
int main(){
	
	int n;
	string s;
	string d="Hoshina";
	cin>>n;
	cin.ignore();
	while(n--){
		getline(cin,s);
		for(int i=6;i<s.size();i++){
		if(s.substr(i-6,7)=="Hoshino")
		s.at(i)='a';
		}
		cout<<s<<endl;
	}
}