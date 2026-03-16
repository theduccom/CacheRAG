#include<iostream>
#include<string>
using namespace std;
int main(){
	string in;
	int c;
	while(cin>>in){
	for(int i=0;i<in.size();i++){
		if(in[i]!='@')cout<<in[i];
		else {
		c=in[++i]-'0';i++;
		for(int j=0;j<c;j++){
			cout<<in[i];	
		}
		}
				
	}
cout<<endl;
}
}