#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	int count = 0;
	string str;
	string str2;
	
	while(cin>>str){
		str2 = str;
		reverse(str.begin(),str.end());
		if(str == str2){count++;}
	}
	cout<<count<<endl;
}