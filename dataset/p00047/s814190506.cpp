#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	char i,j,k;
	string a="A",b="B",c="C";
	int A=1,B=0,C=0;
	while(cin>>i>>k>>j){
		if((i =='A' && j=='B')||(i=='B' && j=='A')) swap(A,B);
		if((i =='B' && j=='C')||(i=='C' && j=='B')) swap(B,C);
		if((i =='A' && j=='C')||(i=='C' && j=='A')) swap(A,C);
	}
	if(A==1) cout<<a<<endl;
	else if(B==1) cout<<b<<endl;
	else if(C==1) cout<<c<<endl;
}