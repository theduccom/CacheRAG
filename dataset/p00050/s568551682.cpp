#include<iostream>
#include<string>
using namespace std;
int main(){
	string str;
	string apple("apple"),peach("peach");
	getline(cin,str);
	for(int i=0;i<str.length();i++){
		string sub = str.substr(i,5);
		if(sub==apple){
			str.replace(i,5,peach);
		}
		else if(sub==peach){
			str.replace(i,5,apple);
		}
	}
	cout<<str<<endl;
	return 0;
}