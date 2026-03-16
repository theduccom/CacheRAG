#include<cstdio>
#include<iostream>
#include<string>

using namespace std;

int main(){
	string str;
	while(getline(cin,str)){
		for(int num=0;num<26;num++){
			for(int i=0;i<str.length();i++){
				if(97<=str[i] && str[i]<=122){
					str[i]+=1;
					if(str[i]>122) str[i] -=26;
				}
			}
			string::size_type index1 = str.find("the");
			string::size_type index2 = str.find("this");
			string::size_type index3 = str.find("that");
		
			if( index1 == string::npos && index2 == string::npos &&
				index3 == string::npos){
				continue;
			}else{
				cout << str <<endl;
				break;
			}
		}
	}
	return 0;

}