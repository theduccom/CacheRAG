#include<iostream>
#include<string>
using namespace std;
int main(){
	string n;
	while(cin>>n){
		for(int i=0;i<n.size();i++){
		if(n[i]!='@')cout<<n[i];
		else {
			for(int j=0;j<n[i+1]-'0';j++)cout<<n[i+2];
			i+=2;
			}
		}
	cout<<'\n';
	}
	return 0;
}