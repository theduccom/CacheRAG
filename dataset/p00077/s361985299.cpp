#include<iostream>
#include<string>
using namespace std;

int main(){
	
	string str;
	
	while(cin>>str){
		
		int n=str.size();
		string a;
		
		for(int i=0;i<n;i++){
			if(str[i]!='@')
				a+=str[i];
			else{
			int p = str[i+1]-'0';
			
			for(int j=0;j<p;j++)
				a+=str[i+2];
			i+=2;
		}
		}
		cout<<a<<endl;
	}
	
}