#include <iostream>
#include <algorithm>
#include <cctype>
#include <cstdio>
#include <math.h>
using namespace std;

int main(){

int m,w[10];

while(cin>>m){
	int k=0;
	for(int i=0;i<10;i++)w[i]=0;
	
	for(int i=9;i>=0;i--)if(m>=pow(2,i)){w[i]=1;m-=pow(2,i);}
	
	for(int i=0;i<10;i++){
		if(w[i]==1&&k==0){cout<<pow(2,i);k=1;}
		else if(w[i]==1)cout<<" "<<pow(2,i);
	}
	cout<<endl;
	}
	return 0;
}