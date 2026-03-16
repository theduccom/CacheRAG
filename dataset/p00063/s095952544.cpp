#include <iostream>
#include <string>
using namespace std;

int main(){
	int n=0;
	string str;
	while(cin >> str){
		for(int i=0;i<str.size();i++){
			if(str[i] != str[str.size()-(i+1)]) break;
			if(i == str.size()-1) n+=1;
		}
	}
	cout << n << endl;
	return 0;
}