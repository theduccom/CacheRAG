#include <iostream>
#include <string>
using namespace std;
int main(){
	string str; int count=0;
	while(cin>>str){
		int len=str.size();
		for(int i=0;i<len/2;i++){
			if(str[i]!=str[len-1-i]) break;
			if(i==len/2-1) count++;
		};
		if(len==1) count++;
	};
	cout << count << '\n' ;
}