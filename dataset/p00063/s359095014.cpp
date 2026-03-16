#include <cstdio>
#include<iostream>
#include<string>

using namespace std;
   
int main(void){

	string inp;
	int cnt=0;
	bool f;

	while(cin>>inp){
		f=true;
		for(int i=0;i<inp.length()/2;i++){
			if(inp[i]!=inp[inp.length()-1-i]) f=false;
		}
		if(f) cnt++;
	}
	cout<<cnt<<endl;

    return 0;
}