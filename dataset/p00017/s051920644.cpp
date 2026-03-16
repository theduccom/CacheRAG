#include<iostream>
#include<string>
#define num 26
using namespace std;

int main(){
	int i;
	string str;
	string strcp;
	string::iterator si;
	while(getline(cin, str)){
		strcp = str;
		for(i=0;i<num;i++){
			if(  strcp.find("this") != string::npos
			  || strcp.find("that") != string::npos
			  || strcp.find("the" ) != string::npos){
				cout << strcp << endl;
			}
			si = strcp.begin();
			while(si != strcp.end()){
				if('a' <= *si && *si <= 'y'){
					*si = *si + 1;
				}else if(*si == 'z'){
					*si = 'a';
				}
				si++;
			}
		}
	}
	return 0;
}