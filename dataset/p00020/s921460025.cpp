#include<iostream>
#include<cstdio>
#include<cmath>
#include <string> 
using namespace std;

int main(){
	string num;
	getline(cin,num);
			for(int i=0;num[i]!='\0';i++){
				if(num[i]>='a'&& num[i]<='z'){
					num[i]+='A'-'a';
				}
			}
		cout << num << "\n";
	
	return 0;
}