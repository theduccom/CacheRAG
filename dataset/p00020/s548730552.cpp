#include<iostream>
#include<ctype.h>
#include<string>

using namespace std;

#define OUT cout <<
#define IN cin >>
#define E << endl;
#define FOR(i,a,b) for(int i = a;i < b;i++)


string str;


int main(){
	getline(cin, str);


	FOR(i,0,str.size()){
		str[i] = (char)toupper((int)(str[i]));
	}
	/*
	OUT str;
	
	while(IN str){
		OUT  " ";
		FOR(i,0,str.size()){
			str[i] = (char)toupper((int)(str[i]));
		}
		OUT str;
	}	
	OUT "\n";
	*/

	OUT str E
}