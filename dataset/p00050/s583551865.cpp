#include<iostream>
#include<istream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
	string apple,peach,before,after,sen;
	apple ="apple";
	peach ="peach";

	getline(cin,sen);

	for(int i=0;i<=sen.size()-5;i++){
		
		if(sen[i]=='a' && sen[i+1]=='p' && sen[i+2]=='p' && sen[i+3]=='l' && sen[i+4]=='e'){
			before =sen.substr(0,i);
			after  =sen.substr(i+5);
			sen = before + peach + after;
		}else if(sen[i]=='p' && sen[i+1]=='e' && sen[i+2]=='a' && sen[i+3]=='c' && sen[i+4]=='h'){
			before =sen.substr(0,i);
			after  =sen.substr(i+5);
			sen = before + apple + after;
		}
	}
	cout<<sen<<endl;
}