#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
	
	int n;
	
	while(cin>>n){
		int s[11]={0};
		int j=0;
	for(int i=9;i>=0;i--){
		if(n-pow(2,i)>=0){
		n=n-pow(2,i);
		s[j++]=pow(2,i);
	}
	}
		if(j>0){
		cout<<s[--j];
	for(int i=j-1;i>=0;i--)
		cout<<" "<<s[i];
		cout<<endl;
	}
	}
}