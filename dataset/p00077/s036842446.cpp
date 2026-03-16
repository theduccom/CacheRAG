#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

int main(){
	string input;
	
		while(cin>>input){
			string ans;
			for(int i=0;i<input.size();i++){
				if(input.substr(i,1)!="@") ans+=input.substr(i,1);
				else{
					int n=atoi(input.substr(i+1,1).c_str());
					for(int j=0;j<n;j++)ans+=input.substr(i+2,1);
					i+=2;
				}
			}
			cout<<ans<<endl;
		}
}