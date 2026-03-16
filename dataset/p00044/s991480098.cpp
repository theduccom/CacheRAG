#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int main(){
	
	int n;
	int s[60000]={0};
	
	s[2]=1;
	
	for(int i=3;i<=60000;i+=2){
		int k=0;
		for(int j=3;j<=sqrt(i);j+=2){
			if(i%j==0)
			{
				k=1;
				break;
			}
		}
		if(k==0)
			s[i]=1;
	}
	while(cin>>n){
		for(int i=n-1;i>=2;i--){
		if(s[i]==1){
			cout<<i<<" ";
			
			break;
		}
	}
	for(int i=n+1;i<=60000;i++){
		if(s[i]==1){
			cout<<i<<endl;
			break;
		}
	}
	
	}
}