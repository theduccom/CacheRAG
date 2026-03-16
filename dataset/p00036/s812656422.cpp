#include <iostream>
#include <algorithm>
#include <cctype>
#include <cstdio>
#include <math.h>
using namespace std;

int main(){
	
	int d[64];
	char c[64];
	
	while(1){
		int k=0;
		for(int i=0;i<64;i++){c[i]=0;d[i]=0;}
		for(int i=0;i<64;i++){cin>>c[i];
			if(c[i]=='1'){d[k]=i;k+=1;}}
		if(k!=4)return 0;
		if(d[1]==d[0]+1){
			if(d[2]==d[0]+2)cout<<"C"<<endl;
			else if(d[2]==d[0]+7)cout<<"G"<<endl;
			else if(d[2]==d[0]+8)cout<<"A"<<endl;
			else cout<<"E"<<endl;
		}
		else if(d[1]==d[0]+8){
			if(d[2]==d[0]+16)cout<<"B"<<endl;
			else cout<<"F"<<endl;
		}
		else cout<<"D"<<endl;
	}
}