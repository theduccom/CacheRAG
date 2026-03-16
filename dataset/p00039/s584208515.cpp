#include <iostream>
#include <algorithm>
#include <cctype>
#include <cstdio>
#include <math.h>
using namespace std;

int main(){
	int b,s,n,w;
	char r[100];
	while(cin>>r){
		b=0;s=0;w=0;
		for(int i=0;i<100;i++){
			switch(r[i]){
			case 'I':n=1;break;
			case 'V':n=5;break;
			case 'X':n=10;break;
			case 'L':n=50;break;
			case 'C':n=100;break;
			case 'D':n=500;break;
			case 'M':n=1000;break;
			default:w=1;
			}
			if(w)break;
			if(b!=0){
				if(n>b)s-=b;
				else s+=b;
			}
			b=n;
		}
		cout<<s+b<<endl;
	}
}