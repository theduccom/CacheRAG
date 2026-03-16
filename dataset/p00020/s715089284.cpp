#include<iostream>
using namespace std;

int main(){

	string a;
	getline(cin,a);
	for(int i=0;a[i]!='\0';i++){
		if(a[i]>='a' && a[i]<='z'){
			a[i]-=32;
		}
	}
	
	cout<<a<<endl;
	
	return 0;
}