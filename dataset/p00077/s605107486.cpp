#include <cstdio>
#include<iostream>
#include<string>

using namespace std;

int main(){
	std::ios_base::sync_with_stdio(false);

	string inp,mozi;
	int kai;

	while(cin>>inp){
		for(int i=0;i<inp.length();i++){
			if(inp[i]=='@'){
				kai=inp[i+1]-'0';
				mozi=inp[i+2];
				for(int j=0;j<kai;j++){
					cout<<mozi;
				}
				i+=2;
			}
			else cout<<inp[i];
		}
		cout<<endl;
	}
		
	return 0;
}