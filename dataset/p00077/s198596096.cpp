#include<iostream>
#include<string>
using namespace std;

int main(void){
	string str;
	while(cin >> str){
		string str2;
		for(int i=0;i<str.size();i++){
			if(str[i]=='@'){
				int a=str[i+1]-'0';
				for(int j=0;j<a;j++){
					str2+=str[i+2];
				}
				i+=2;
			}
			else str2+=str[i];
		}
		cout << str2 << endl;
	}
    return 0;
}