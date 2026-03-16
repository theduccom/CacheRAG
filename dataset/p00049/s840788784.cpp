#include<iostream>
#include<string>
using namespace std;
int main(){
	int a=0,b=0,ab=0,o=0,h;
	char z;
	string x;
	while(cin>>h>>z>>x){
		if(x=="A")
			a++;
		if(x=="B")
			b++;
		if(x=="AB")
			ab++;
		if(x=="O")
			o++;
	}
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<ab<<endl;
	cout<<o<<endl;
	return 0;
}