#include <iostream>
#include <vector>
#include <cstdio>
#include <string>
using namespace std;

int main(){
	
	string a;
	//int n;
	int k=0;
	//cin>>n;
	while(cin>>a){
		//cin>>a;
		int f=0;
		//cout<<a.size()/2<<endl;
		for(int i=0;i<a.size()/2;i++){
			//cout<<a[i]<<a[a.size()-1-i]<<endl;
		if(a[i]!=a[a.size()-1-i])
			f=1;
		}
		if(f==0)
			k++;
		//n--;
	}
	cout<<k<<endl;
	
}